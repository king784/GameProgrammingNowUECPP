// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerCharacter.h"
#include "InteractInterface.h"
#include "LightSwitch.h"
#include "NotifyInterface.h"
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
	
	if(OtherName.Contains("BlockingVolume"))
	{
		FVector NewMoveVec = OtherActor->GetActorForwardVector(); // OtherActor->GetActorLocation() - GetActorLocation();
		NewMoveVec = NewMoveVec.GetSafeNormal();
		NewMoveVec *= 100.0f;
		NewMoveVec.Z = 90.0f;
		SetActorLocation(NewMoveVec);
		// NewMoveVec = NewMoveVec.Normalize(0.1f);
		// NewMoveVec *= 100.0f;
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

void AMyPlayerCharacter::Die()
{
	if (IsDead)
	{
		return;
	}
	IsDead = true;

	// Notify about dead
	TArray<AActor*> Interfaces;
	UGameplayStatics::GetAllActorsWithInterface(this, UNotifyInterface::StaticClass(), Interfaces);
	for (const auto& Actor : Interfaces) 
	{

		// Try to Execute on Blueprint layer:
		const auto& Interface = Cast<INotifyInterface>(Actor);
		if (!Interface) 
		{ 
			if (Actor->GetClass()->ImplementsInterface(UNotifyInterface::StaticClass())) {
				INotifyInterface::Execute_NotifyDead(Actor, this);
			}
		}
	}
}

// Called when the game starts or when spawned
void AMyPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	// Set camera to default pos

	// FRotator rot(0.0f, CameraAngle, 0.0f);
	// CameraOffset = rot.RotateVector(CameraOffset);
	// 
	// OurCamera->SetRelativeLocation(CameraOffset);
	// 
	// FRotator Rot = FRotationMatrix::MakeFromX(OurCamera->GetComponentLocation() - MyMesh->GetComponentLocation()).Rotator();
	// Rot.Pitch = -9.0f;
	// OurCamera->SetRelativeRotation(Rot);
	
	//OurCamera->SetRelativeLocation(FVector(-350.0f, 0.0f, 225.0f));
	OurCamera->SetRelativeRotation(FRotator(-20.0f, 0.0f, 0.0f));
	CameraOffset = FVector(-700.0f, 0.0f, 450.0f); // FVector(MyMesh->GetComponentLocation().X - 700.0f, MyMesh->GetComponentLocation().Y, MyMesh->GetComponentLocation().Z + 450.0f);
	//OurCamera->SetRelativeLocation(CameraOffset);
	RotCamLeftInput();

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

	// Get animation instance fields to update. Crashes so I'm doing this in blueprints.
	// FName SpeedAnimPropName = TEXT("Speed");
	// FName IsDeadAnimPropName = TEXT("IsDead");
	// AnimInst = MyMesh->GetAnimInstance();
	// if (AnimInst)
	// {
	// 	SpeedAnim = FindField<UFloatProperty>(AnimInst->GetClass(), SpeedAnimPropName);
	// 	IsDeadAnim = FindField<UBoolProperty>(AnimInst->GetClass(), IsDeadAnimPropName);
	// }
}

// Called every frame
void AMyPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsDead)
	{
		return;
	}

	UpdateBatteryCharge(-0.0005f);
	//UE_LOG(LogTemp, Warning, TEXT("%f"), batteryCharge);

	// Handle movement based on our "MoveX" and "MoveY" axes
	if (!CurrentVelocity.IsZero())
	{
		// FVector MoveVec = OurCamera->GetForwardVector();
		// FRotator rot(0.0f, CameraAngle, 0.0f);
		// CurrentVelocity = rot.RotateVector(CurrentVelocity);
		
		// FQuat Between = FQuat::FindBetween(FVector(OurCamera->GetForwardVector()).GetSafeNormal(), FVector(0.0f, 1.0f, 0.0f).GetSafeNormal());
		// FRotator MyRot(0.0f, Between.Y, 0.0f);
		// float Angle = FMath::Abs(MyRot.Yaw);
		// CurrentVelocity = MyRot.RotateVector(CurrentVelocity);
		
		FVector RightVec = -CurrentVelocity.Y * OurCamera->GetRightVector();
		FVector ForwardVec = -CurrentVelocity.X * OurCamera->GetForwardVector();
		ForwardVec = ForwardVec.RotateAngleAxis(-9.0f, OurCamera->GetRightVector());

		// Needs some adjustement, because when 2 movement keys are pressed simultaneously, rotation is wrong
		FRotator MeshRot(ForwardVec.GetSafeNormal().Rotation() + RightVec.GetSafeNormal().Rotation());
		if (RightVec.Size() > 10.0f && ForwardVec.Size() > 10.0f)
		{

		}
		else
		{
			MeshRot.Yaw -= 90.0f;
		}
		
		MyMesh->SetWorldRotation(MeshRot);
		
		// FRotator RotForward(ForwardVec.GetSafeNormal().Rotation());
		// RotForward.Pitch += 20.0f;
		// ForwardVec = RotForward.RotateVector(ForwardVec);

		FVector NewLocation = GetActorLocation() + ((RightVec + ForwardVec) * DeltaTime) * BatteryCharge;
		SetActorLocation(NewLocation);

		AnimationMoveSpeed = ((RightVec + ForwardVec) * DeltaTime) * BatteryCharge;

		// Set animation blueprint values, doing in bp because crash
		// float MovementLength = ForwardVec.Size() + RightVec.Size();
		// SpeedAnim->SetPropertyValue(AnimInst, MovementLength);
		
		// if (GetActorLocation().X > MovementBoundBL.X && GetActorLocation().Y > MovementBoundBL.Y)
		// {
		// 	if (GetActorLocation().X < MovementBoundTR.X && GetActorLocation().Y < MovementBoundTR.Y)
		// 	{
		// 		// Put location change code here
		// 	}
		// 	else
		// 	{
		// 		SetActorLocation(LastLocation);
		// 	}
		// }
		// else
		// {
		// 	SetActorLocation(LastLocation);
		// }
	}
	else
	{
		AnimationMoveSpeed = FVector(0.0f);
	}

	if (RotRight)
	{
		RotCamRightInput();
	}

	if (RotLeft)
	{
		RotCamLeftInput();
	}

	// Change charge bar values
	ChargeBar->SetPercent(BatteryCharge);
	float ReverseBatteryCharge = 1.0f - BatteryCharge;
	FLinearColor NewCol(ReverseBatteryCharge, BatteryCharge, 0.0f);
	ChargeBar->SetFillColorAndOpacity(NewCol);
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
	BatteryCharge += newCharge;
	BatteryCharge = FMath::Clamp(BatteryCharge, 0.0f, 1.0f);
	if (BatteryCharge <= 0.01f)
	{
		// Game over
		Die();
	}
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
	AddMovementInput(GetActorForwardVector(), FMath::Clamp(AxisValue, -1.0f, 1.0f) * MoveSpeed);
	CurrentVelocity.X = FMath::Clamp(AxisValue, -1.0f, 1.0f) * MoveSpeed;
}

void AMyPlayerCharacter::Move_YAxis(float AxisValue)
{
	// Move at 100 units per second right or left
	AddMovementInput(GetActorRightVector(), FMath::Clamp(AxisValue, -1.0f, 1.0f) * MoveSpeed);
	CurrentVelocity.Y = FMath::Clamp(AxisValue, -1.0f, 1.0f) * MoveSpeed;
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