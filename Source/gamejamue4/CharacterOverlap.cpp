// Fill out your copyright notice in the Description page of Project Settings.

#include "CharacterOverlap.h"
#include "DeadlyMultiplyingSubstance.h"

// Sets default values for this component's properties
UCharacterOverlap::UCharacterOverlap()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCharacterOverlap::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCharacterOverlap::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


void UCharacterOverlap::ReactToCharOverlap(ADeadlyMultiplyingSubstance* subs)
{
	//UE_LOG(LogTemp, Warning, TEXT("overlap detected"));

	CharOverlap.Broadcast();

	//I will do this in case im not able to bind this function to the delegate
	subs->CreateImitation();


	//TODO Spawn another deadly actor & broadcast an event so that the health bar can be lowered in bp
}
