// Fill out your copyright notice in the Description page of Project Settings.


#include "LightSwitch.h"

#include "EngineUtils.h"

// Sets default values
ALightSwitch::ALightSwitch()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set mesh up
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->AttachTo(Root);

	// Set collisions
	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BoxCollision->AttachTo(Root);

	InfoText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("InfoText"));
	InfoText->AttachTo(Root);
	InfoText->SetText(TEXT("Press F to interact"));
	InfoText->SetWorldSize(50.0f);
	InfoText->SetRelativeLocation(FVector(0.0, 100.0, 0.0));
	InfoText->SetVisibility(false);
}

void ALightSwitch::Interact_Implementation()
{
	/*for(TActorIterator<AActor> It(World, AActor::StaticClass()); It; It++)
	{
		It->SetActorHiddenInGame(LightsOn);
	}*/

	/*for (int i = 0; i < lights.Num(); i++)
	{

	}*/

	for (AActor* Actor : Lights)
	{
		Actor->SetActorHiddenInGame(LightsOn);
	}

	LightsOn = !LightsOn;
}

void ALightSwitch::ToggleInfo()
{
	if (InfoIsOn)
	{
		InfoText->SetVisibility(false);
	}
	else
	{
		InfoText->SetVisibility(true);
	}
	InfoIsOn = !InfoIsOn;
}