// Fill out your copyright notice in the Description page of Project Settings.

#include "DeadlyMultiplyingSubstance.h"


// Sets default values
ADeadlyMultiplyingSubstance::ADeadlyMultiplyingSubstance()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	

	SpawnLocation = this->GetActorLocation();
	SpawnLocation.X = FMath::RandRange(-30.0f,30.0f);

	SpawnLocation.Y = FMath::RandRange(-30.0f, 30.0f);


	//who did the spawn this did
	SpawnParams.Owner = this;

	//default settings
	SpawnParams.Instigator = Instigator;


}

// Called when the game starts or when spawned
void ADeadlyMultiplyingSubstance::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADeadlyMultiplyingSubstance::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADeadlyMultiplyingSubstance::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ADeadlyMultiplyingSubstance::CreateImitation()
{
	UE_LOG(LogTemp, Warning, TEXT("Delegate structure works absolutely fine"));

	auto NewDeadlySubstance = GetWorld()->SpawnActor<ADeadlyMultiplyingSubstance>(ObjectToBeSpawned, SpawnLocation, FRotator::ZeroRotator, SpawnParams);
	//TODO logic of spawning the deadly blueprint actor;
}
