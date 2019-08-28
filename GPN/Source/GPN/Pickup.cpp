// Fill out your copyright notice in the Description page of Project Settings.


#include "Pickup.h"

#include "Components/StaticMeshComponent.h"

// Sets default values
APickup::APickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Set mesh up
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->AttachTo(Root);

	auto StaticMeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Game/ExampleContent/Blueprint_Communication/Meshes/SM_Battery_Medium.SM_Battery_Medium'"));

	if (StaticMeshAsset.Succeeded())
	{
		UStaticMesh* TheMeshAsset = StaticMeshAsset.Object;
		Mesh->SetStaticMesh(TheMeshAsset);
	}

	// Set collisions
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BoxCollision->AttachTo(Root);
	BoxCollision->SetRelativeLocation(FVector(0, 0, 40));
	BoxCollision->SetRelativeScale3D(FVector(1.25, 1.25, 1.25));

	BoxCollision->OnComponentBeginOverlap.AddDynamic(this, &APickup::OnOverlapBegin);

	bIsActive = true;
}

// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void APickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Location
	FVector NewLocation = GetActorLocation();
	float DeltaHeight = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime));
	NewLocation.Z += DeltaHeight * 20.0f;       //Scale our height by a factor of 20
	RunningTime += DeltaTime;
	SetActorLocation(NewLocation);

	// Rotation
	RotationValueX = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime)) * 2.0f;
	RotationValueZ = (FMath::Sin(RunningTime + DeltaTime) - FMath::Sin(RunningTime)) * 2.0f;
	FRotator NewRotation = FRotator(RotationValueX, RotationValueY, RotationValueZ);
	FQuat QuatRotation = FQuat(NewRotation);
	AddActorLocalRotation(QuatRotation);
}

// Called when hit
void APickup::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	FString OtherName = OtherActor->GetName();
	FString PlayerName = "MyPlayerCharacter_0";

	// std::string OtherNameStr = std::string(TCHAR_TO_UTF8(*OtherName));
	// std::string PlayerNameStr = std::string(TCHAR_TO_UTF8(*PlayerName));
	// UE_LOG(LogTemp, Warning, TEXT("%s"), *FString(OtherNameStr.c_str()));
	// UE_LOG(LogTemp, Warning, TEXT("%s"), *FString(PlayerNameStr.c_str()));

	if (PlayerName == OtherName)
	{
		Destroy();
	}
}

bool APickup::IsActive()
{
	return bIsActive;
}

void APickup::SetActive(bool NewPickupState)
{
	bIsActive = NewPickupState;
}
