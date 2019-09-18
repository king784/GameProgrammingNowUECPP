// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerCharacter.h"
#include "InteractInterface.h"
#include "LightSwitch.h"
#include "Blueprint/UserWidget.h"

// Sets default values
AMyPlayerCharacter::AMyPlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.DoNotCreateDefaultSubobject(ACharacter::MeshComponentName))
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set this pawn to be controlled by the lowest-numbered player
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	// Create a dummy root component we can attach things to.
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	// Create player mesh
	MyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	MyMesh->AttachTo(RootComponent);
	MyMesh->SetRelativeScale3D(FVector(6.0, 6.0, 6.0));
	MyMesh->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));
	/*MyMesh->OnComponentBeginOverlap.AddDynamic(this, &AMyPlayerCharacter::OnOverlapBegin);
	MyMesh->OnComponentEndOverlap.AddDynamic(this, &AMyPlayerCharacter::OnOverlapEnd);*/

	// Set collisions
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BoxCollision->AttachTo(RootComponent);
	BoxCollision->SetRelativeLocation(FVector(0, 0, 0));
	BoxCollision->SetRelativeScale3D(FVector(1.25, 1.25, 1.25));

	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &AMyPlayerCharacter::OnOverlapBegin);
	BoxCollision->OnComponentEndOverlap.AddDynamic(this, &AMyPlayerCharacter::OnOverlapEnd);

	/*MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MyMesh->AttachTo(RootComponent);*/
	/*auto StaticMeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));

		if (StaticMeshAsset.Succeeded())
		{
			UStaticMesh* TheMeshAsset = StaticMeshAsset.Object;
			MyMesh->SetStaticMesh(TheMeshAsset);
			MyMesh->OnComponentBeginOverlap.AddDynamic(this, &AMyPlayerCharacter::OnOverlapBegin);
			MyMesh->OnComponentEndOverlap.AddDynamic(this, &AMyPlayerCharacter::OnOverlapEnd);
		}*/

	// StaticMesh'/Engine/BasicShapes/Cube.Cube'

	// Create a camera and a visible object
	OurCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("OurCamera"));
	// Attach our camera and visible object to our root component. Offset and rotate the camera.
	OurCamera->SetupAttachment(RootComponent);
	OurCamera->SetRelativeLocation(FVector(-700.0f, 0.0f, 450.0f));
	OurCamera->SetRelativeRotation(FRotator(-20.0f, 0.0f, 0.0f));
	CameraOffset = FVector(MyMesh->GetComponentLocation().X - 700.0f, MyMesh->GetComponentLocation().Y, MyMesh->GetComponentLocation().Z + 450.0f);
}

void AMyPlayerCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	FString OtherName = OtherActor->GetName();
	FString PlayerName = "MyPlayerCharacter_0";

	std::string OtherNameStr = std::string(TCHAR_TO_UTF8(*OtherName));

	if (OtherName.Contains("LightSwitch"))
	{
		CanInteract = true;
		InteractTarget = OtherActor;
		ALightSwitch* theSwitch = Cast<ALightSwitch>(OtherActor);
		theSwitch->ToggleInfo();
	}
	// Check if implements:  if(UKismetSystemLibrary::DoesImplementInterface(OtherActor,))
}

void AMyPlayerCharacter::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	FString OtherName = OtherActor->GetName();
	FString PlayerName = "MyPlayerCharacter_0";

	std::string OtherNameStr = std::string(TCHAR_TO_UTF8(*OtherName));

	if (OtherName.Contains("LightSwitch"))
	{
		CanInteract = false;
		InteractTarget = NULL;
		ALightSwitch* theSwitch = Cast<ALightSwitch>(OtherActor);
		theSwitch->ToggleInfo();
	}
	// Check if implements:  if(UKismetSystemLibrary::DoesImplementInterface(OtherActor,))
}

// Called when the game starts or when spawned
void AMyPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	// Set camera to default pos
	FRotator rot(0.0f, CameraAngle, 0.0f);
	CameraOffset = rot.RotateVector(CameraOffset);

	OurCamera->SetRelativeLocation(CameraOffset);

	FRotator Rot = FRotationMatrix::MakeFromX(OurCamera->GetComponentLocation() - MyMesh->GetComponentLocation()).Rotator();
	Rot.Pitch = -9.0f;
	OurCamera->SetRelativeRotation(Rot);

	// Game UI
	if (wGameUI)
	{
		MyGameUI = CreateWidget<UUserWidget>(GetWorld(), wGameUI);

		if (MyGameUI)
		{
			MyGameUI->AddToViewport();
			ChargeBar = (UProgressBar*)(MyGameUI->GetWidgetFromName("ChargeBar"));
		}
	}
}

// Called every frame
void AMyPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UpdateBatteryCharge(-0.0001f);
	//UE_LOG(LogTemp, Warning, TEXT("%f"), batteryCharge);

	// Handle movement based on our "MoveX" and "MoveY" axes
	if (!CurrentVelocity.IsZero())
	{
		FVector NewLocation = GetActorLocation() + (CurrentVelocity * DeltaTime) * batteryCharge;
		SetActorLocation(NewLocation);
	}
	

	if (RotRight)
	{
		RotCamRightInput();
	}

	if (RotLeft)
	{
		RotCamLeftInput();
	}

	ChargeBar->SetPercent(batteryCharge);
}

// Called to bind functionality to input
void AMyPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Respond every frame to the values of our two movement axes, "MoveX" and "MoveY".
	PlayerInputComponent->BindAxis("MoveX", this, &AMyPlayerCharacter::Move_XAxis);
	PlayerInputComponent->BindAxis("MoveY", this, &AMyPlayerCharacter::Move_YAxis);

	 PlayerInputComponent->BindAction("RotateRight", IE_Pressed, this, &AMyPlayerCharacter::SetRotRight);
	 PlayerInputComponent->BindAction("RotateLeft", IE_Pressed, this, &AMyPlayerCharacter::SetRotLeft);
	 PlayerInputComponent->BindAction("RotateRight", IE_Released, this, &AMyPlayerCharacter::UnsetRot);
	 PlayerInputComponent->BindAction("RotateLeft", IE_Released, this, &AMyPlayerCharacter::UnsetRot);

	 PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &AMyPlayerCharacter::Interact);

	 PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AMyPlayerCharacter::DoJump);
}

void AMyPlayerCharacter::UpdateBatteryCharge(float newCharge)
{
	batteryCharge += newCharge;
	batteryCharge = FMath::Clamp(batteryCharge, 0.0f, 1.0f);
}

void AMyPlayerCharacter::Interact()
{
	if (CanInteract)
	{
		IInteractInterface::Execute_Interact(InteractTarget);
	}
}

void AMyPlayerCharacter::DoJump()
{
	// MyMesh->AddImpulse(GetActorUpVector() * 1000.0f);
}

void AMyPlayerCharacter::Move_XAxis(float AxisValue)
{
	// Move at 100 units per second forward or backward
	 AddMovementInput(GetActorForwardVector(), FMath::Clamp(AxisValue, -1.0f, 1.0f) * 500.0f);
	 CurrentVelocity.X = FMath::Clamp(AxisValue, -1.0f, 1.0f) * 500.0f;
}

void AMyPlayerCharacter::Move_YAxis(float AxisValue)
{
	// Move at 100 units per second right or left
	AddMovementInput(GetActorRightVector(), FMath::Clamp(AxisValue, -1.0f, 1.0f) * 500.0f);
	CurrentVelocity.Y = FMath::Clamp(AxisValue, -1.0f, 1.0f) * 500.0f;
}

void AMyPlayerCharacter::RotCamRightInput()
{
	/*UE_LOG(LogTemp, Warning, TEXT("blee"));*/

	/*CameraAngle += 0.05f;
	if (CameraAngle > 360.0f)
	{
		CameraAngle = 1;
	}*/

	//CameraOffset = FVector(MyMesh->GetComponentLocation().X - 700.0f, MyMesh->GetComponentLocation().Y, MyMesh->GetComponentLocation().Z + 450.0f);

	FRotator rot(0.0f, CameraAngle, 0.0f);
	CameraOffset = rot.RotateVector(CameraOffset);

	OurCamera->SetRelativeLocation(CameraOffset);

	FRotator Rot = FRotationMatrix::MakeFromX(OurCamera->GetComponentLocation() - MyMesh->GetComponentLocation()).Rotator();
	Rot.Pitch = -9.0f;
	OurCamera->SetRelativeRotation(Rot);

	//FVector PlayerPos = MyMesh->GetComponentLocation();
	//FVector CameraPos = OurCamera->GetComponentLocation(); // FVector(-700.0f, 0.0f, 250.0f);
	//PlayerPos.Z = CameraPos.Z;
	//
	

	//FRotator rot(CameraAngle, 0.0f, 0.0f);
	//CameraPos = rot.RotateVector(PlayerPos.UpVector);

	//OurCamera->SetRelativeLocation(CameraPos);

	//FVector RotateValue = CameraPos.RotateAngleAxis(CameraAngle, FVector(0, 0, 1));

	//PlayerPos.X += RotateValue.X;
	//PlayerPos.Y += RotateValue.Y;
	//PlayerPos.Z += RotateValue.Z;

	////OurCamera->SetRelativeLocation(PlayerPos);

	//FRotator NewRotation = FRotator(0.0f, 1.0f, 0.0f);
	//FQuat QuatRotation = FQuat(NewRotation);
	//OurCamera->AddLocalRotation(QuatRotation);
}

void AMyPlayerCharacter::RotCamLeftInput()
{
	FRotator rot(0.0f, -CameraAngle, 0.0f);
	CameraOffset = rot.RotateVector(CameraOffset);

	OurCamera->SetRelativeLocation(CameraOffset);

	FRotator Rot = FRotationMatrix::MakeFromX(OurCamera->GetComponentLocation() - MyMesh->GetComponentLocation()).Rotator();
	Rot.Pitch = -9.0f;
	OurCamera->SetRelativeRotation(Rot);

	//UE_LOG(LogTemp, Warning, TEXT("jee"));
	//FVector PlayerPos = MyMesh->GetComponentLocation();
	//FVector Radius = FVector(-700.0f, 0.0f, 250.0f);
	//CameraAngle--;
	//if (CameraAngle < 0.0f)
	//{
	//	CameraAngle = 359.0f;
	//}

	//FVector RotateValue = Radius.RotateAngleAxis(CameraAngle, FVector(0, 0, 1));

	//PlayerPos.X += RotateValue.X;
	//PlayerPos.Y += RotateValue.Y;
	////PlayerPos.Z += RotateValue.Z;
	//PlayerPos.Z = Radius.Z;

	//OurCamera->SetRelativeLocation(PlayerPos);

	//FRotator NewRotation = FRotator(0.0f, -1.0f, 0.0f);
	//FQuat QuatRotation = FQuat(NewRotation);
	//OurCamera->AddLocalRotation(QuatRotation);
}

void AMyPlayerCharacter::SetRotRight()
{
	RotRight = true;
}

void AMyPlayerCharacter::SetRotLeft()
{
	RotLeft = true;
}

void AMyPlayerCharacter::UnsetRot()
{
	RotRight = false;
	RotLeft = false;
}