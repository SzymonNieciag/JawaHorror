// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerControllerBase.h"

APlayerControllerBase::APlayerControllerBase()
{
	PrimaryActorTick.bCanEverTick = true;
	TeamId = FGenericTeamId(0);
}

FGenericTeamId APlayerControllerBase::GetGenericTeamId() const
{
	return TeamId;
}

void APlayerControllerBase::SetGenericTeamId(const FGenericTeamId& NewTeamID)
{
	TeamId = NewTeamID;
}
