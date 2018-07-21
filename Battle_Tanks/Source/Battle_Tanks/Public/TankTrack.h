// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankTrack.generated.h"

/**
 * Tank Track is used to set max driving force and to apply driving force to the tank
 */
UCLASS(meta = (BlueprintSpawnableComponent))
class BATTLE_TANKS_API UTankTrack : public UStaticMeshComponent
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Input")
	void SetThrottle(float Throttle);
	
	// Max force per track in Newtons
	UPROPERTY(EditDefaultsOnly)
	float MaxDrivingForce = 124200; // Assume tank = 46000kg and accelleration = 2.7m/s/s
};
