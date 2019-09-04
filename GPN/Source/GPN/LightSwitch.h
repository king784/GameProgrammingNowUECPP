// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractInterface.h"
#include "Components/BoxComponent.h"
#include "LightSwitch.generated.h"

UCLASS()
class GPN_API ALightSwitch : public AActor, public IInteractInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ALightSwitch();

	UPROPERTY(EditAnywhere)
	TArray<AActor*> Lights;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interact")
		void Interact();
	virtual void Interact_Implementation() override;

	UPROPERTY()
		USceneComponent* Root;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* Mesh;

	UPROPERTY(VisibleAnywhere)
		UBoxComponent* BoxCollision;

private:
	bool LightsOn = true;

};
