// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MyPlayerCharacter.h"
#include "NotifyInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(Blueprintable)
class UNotifyInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class GPN_API INotifyInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintImplementableEvent)
		void NotifyDead(const AMyPlayerCharacter* Context);

	UFUNCTION(BlueprintImplementableEvent)
		void NotifyVictory(const AMyPlayerCharacter* Context);
};
