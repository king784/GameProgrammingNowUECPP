// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include <string>

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "ParticleDefinitions.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "MyPlayerCharacter.h"
#include "Pickup.generated.h"

UCLASS()
class GPN_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Is the pickup active?
	bool bIsActive;

public:	
	float RunningTime;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = Pickup)
	void OnPickup();

	// Overlap
	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION(BlueprintPure, Category = Pickup)
	bool IsActive();

	UFUNCTION(BlueprintCallable, Category = Pickup)
	void SetActive(bool NewPickupState);



private:
	float RotationValueZ = 0.0f;
	float RotationValueX = 0.0f;
	float RotationValueY = 2.0f;

	FTimerHandle DestroyTimer;

	void DestroyStuff();

	UParticleSystemComponent* theParticles;

	UPROPERTY()
		USceneComponent* Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Pickup, meta=(AllowPrivateAccess = "true"))
		UStaticMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere, Category = Pickup)
		UBoxComponent* BoxCollision;

	UPROPERTY(VisibleAnywhere, Category = Pickup)
		UParticleSystem* LightningParticles;

	AMyPlayerCharacter* PlayerChar;

	bool ChargeGiven = false;
};
