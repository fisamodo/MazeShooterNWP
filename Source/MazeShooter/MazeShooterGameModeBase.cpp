// Fill out your copyright notice in the Description page of Project Settings.

#include "MazeShooterGameModeBase.h"
#include "UObject/ConstructorHelpers.h"
#include "MazeShooterGameState.h"

AMazeShooterGameModeBase::AMazeShooterGameModeBase()
{
	
	PointsToWin = 5;
}
void AMazeShooterGameModeBase::OnTargetHit()
{
	if (AMazeShooterGameState* GS = Cast <AMazeShooterGameState>(GameState))
	{
		GS->Points++;
		if (GS->Points >= PointsToWin)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("You won the game! It took you %f seconds to win the game."), GetWorld()->GetTimeSeconds()));
			GetWorld()->ServerTravel(FString("/Game/Labyrinth"));


		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Cyan, FString::Printf(TEXT("You scored a point, you now have %d points"), GS->Points));

		}
	}
}

