// Fill out your copyright notice in the Description page of Project Settings.


#include "TankGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "ToonTanks/Pawns/PawnTank.h"
#include "ToonTanks/Pawns/PawnTurret.h"

void ATankGameModeBase::BeginPlay()
{
	Super::BeginPlay();

}

void ATankGameModeBase::ActorDied(AActor* DeadActor)
{
	if (DeadActor == PlayerTank)
	{
		PlayerTank->HandleDestruction();
		HandleGameOver(false);
	}
	else if (APawnTurret* DestroyedTurret = Cast<APawnTurret>(DeadActor))
	{
		DestroyedTurret->HandleDestruction();
		TargetTurrets--;
		if (TargetTurrets <= 0)
		{
			HandleGameOver(true);
		}
	}
}

int32 ATankGameModeBase::GetTargetTurretCount()
{
	TArray<AActor*> TurretActors;
	UGameplayStatics::GetAllActorsOfClass(this, APawnTurret::StaticClass(), TurretActors);

	return TurretActors.Num(); // Return the number of turrets (length of the array)}
}

void ATankGameModeBase::HandleGameStart()
{
	TargetTurrets = GetTargetTurretCount();
	PlayerTank = Cast<APawnTank>(UGameplayStatics::GetPlayerPawn(this, 0));

	GameStart();
}

void ATankGameModeBase::HandleGameOver(bool PlayerWon)
{
	GameOver(PlayerWon);
}




