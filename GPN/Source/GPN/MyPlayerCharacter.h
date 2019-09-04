// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <string>

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"
#include "ConstructorHelpers.h"
#include "MyPlayerCharacter.generated.h"

UCLASS()
class GPN_API AMyPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyPlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UCameraComponent* OurCamera;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	// Mesh
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* MyMesh;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Input functions
	void Move_XAxis(float AxisValue);
	void Move_YAxis(float AxisValue);

	void RotCamRightInput();
	void RotCamLeftInput();

	void SetRotRight();
	void SetRotLeft();
	void UnsetRot();

	void Interact();
	AActor* InteractTarget;

	// Input variables
	FVector CurrentVelocity;

private:
	float CameraAngle = 0;
	bool RotLeft = false;
	bool RotRight = false;
	bool CanInteract = false;
};
