// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterOverlap.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCharOverlap);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GAMEJAMUE4_API UCharacterOverlap : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCharacterOverlap();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//reacting to character Overlap event
	UFUNCTION(BlueprintCallable)
		void ReactToCharOverlap(ADeadlyMultiplyingSubstance* subs);

	UPROPERTY(BlueprintAssignable)
		FCharOverlap CharOverlap;
		
	
};
