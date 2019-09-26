// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <string>

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"
#include "Components/ProgressBar.h"
#include "Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "ConstructorHelpers.h"
#include "MyPlayerCharacter.generated.h"

UCLASS()
class GPN_API AMyPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyPlayerCharacter(const FObjectInitializer& ObjectInitializer);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* OurCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Widgets")
		TSubclassOf<class UUserWidget> wGameUI;

	UPROPERTY(EditAnywhere)
		UAnimBlueprint* AnimBP;
	//const ConstructorHelpers::FObjectFinder<UAnimBlueprint> AnimObj(TEXT("AnimBlueprint'/Game/MixamoAnimPack/Mixamo_Maw/Anims/MixamoAnimBP_Maw.MixamoAnimBP_Maw'"));

	UPROPERTY()
	UUserWidget* MyGameUI;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION(BlueprintCallable)
		void Die();

	// Mesh
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USkeletalMeshComponent* MyMesh;

	UPROPERTY(VisibleAnywhere)
	UBoxComponent* BoxCollision;

	UProgressBar* ChargeBar;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool isInAir;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void UpdateBatteryCharge(float newCharge);

	// Movement functions
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float MoveSpeed = 1000.0f;
	void Move_XAxis(float AxisValue);
	void Move_YAxis(float AxisValue);

	void RotCamRightInput();
	void RotCamLeftInput();

	void SetRotRight();
	void SetRotLeft();
	void UnsetRot();

	void DoJump();

	void Interact();
	AActor* InteractTarget;

	// Movement variables
	UPROPERTY(BlueprintReadWrite)
	FVector CurrentVelocity;

	UPROPERTY(BlueprintReadWrite)
	FVector AnimationMoveSpeed;

	UPROPERTY(BlueprintReadWrite)
	bool IsDead;

private:
	// Movement boundaries
	FVector MovementBoundTR = FVector(2440.0, 2600.0, 160.0);
	FVector MovementBoundBL = FVector(-1530.0, -1080.0, 160.0);
	FVector LastLocation = FVector(0.0);
	// Camera values
	FVector CameraOffset;
	float CameraAngle = 1.0f;
	bool RotLeft = false;
	bool RotRight = false;

	bool CanInteract = false;
	float BatteryCharge = 1.0f;

	// Animation variables for controlling animation, Doing this in BP to avoid crash
	// UAnimInstance* AnimInst;
	// UFloatProperty* SpeedAnim;
	// UBoolProperty* IsDeadAnim;
};
