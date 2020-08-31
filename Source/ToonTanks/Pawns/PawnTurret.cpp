// Fill out your copyright notice in the Description page of Project Settings.


#include "PawnTurret.h"
#include "Kismet/GameplayStatics.h"
#include "PawnTank.h"

void APawnTurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!PlayerPawn || DistanceToPlayer() > FireRange) { return; }

	RotateTurret(PlayerPawn->GetActorLocation());
}


void APawnTurret::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(FireRateTimerHandle, this, &APawnTurret::CheckFireCondition, FireRate, true);
	PlayerPawn = Cast<APawnTank>(UGameplayStatics::GetPlayerPawn(this, 0));
}

void APawnTurret::HandleDestruction()
{
	Super::HandleDestruction();
	Destroy();
}


float APawnTurret::DistanceToPlayer()
{
	return FVector::Dist(PlayerPawn->GetActorLocation(), GetActorLocation());
}

void APawnTurret::CheckFireCondition()
{
	if (!PlayerPawn || !PlayerPawn->GetIsPlayerAlive()) { return; }

	if (DistanceToPlayer() <= FireRange)
	{
		Fire();
	}

}