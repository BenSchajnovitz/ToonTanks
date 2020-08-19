// Fill out your copyright notice in the Description page of Project Settings.


#include "PawnTurret.h"



void APawnTurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void APawnTurret::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->GetTimerManager().SetTimer(FireRateTimerHandle, this, &APawnTurret::CheckFireCondition, FireRate, true);
}


void APawnTurret::CheckFireCondition()
{

	UE_LOG(LogTemp, Warning, TEXT("Fire Condition Checked!"));
}