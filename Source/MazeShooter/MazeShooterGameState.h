// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "MazeShooterGameState.generated.h"

/**
 * 
 */
UCLASS()
class MAZESHOOTER_API AMazeShooterGameState : public AGameStateBase
{
	GENERATED_BODY()
public:

	AMazeShooterGameState();

	int32 Points;
};
