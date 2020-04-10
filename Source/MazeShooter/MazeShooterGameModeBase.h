// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MazeShooterGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class MAZESHOOTER_API AMazeShooterGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:

	AMazeShooterGameModeBase();
	void OnTargetHit();

	UPROPERTY(EditAnywhere, Category = "Game Rules")
	int32 PointsToWin;
	
};
