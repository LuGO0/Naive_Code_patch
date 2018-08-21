// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include"Engine/World.h"
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DeadlyMultiplyingSubstance.generated.h"

UCLASS()
class GAMEJAMUE4_API ADeadlyMultiplyingSubstance : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ADeadlyMultiplyingSubstance();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//reacting to the broadcast and multiplying
	UFUNCTION()
		void CreateImitation();

	//Fvector spawn location
	FVector SpawnLocation;

	//FRotator Spawn rotator
	FRotator SpawnRotation = FRotator(0);

	//Spawning Actor Class
	UPROPERTY(Editanywhere)
	TSubclassOf<ADeadlyMultiplyingSubstance> ObjectToBeSpawned;

	//FSpawnParam setup for the spawn action
	FActorSpawnParameters SpawnParams;
	
	
};
