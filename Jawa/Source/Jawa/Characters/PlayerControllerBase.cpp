// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerControllerBase.h"

APlayerControllerBase::APlayerControllerBase()
{
	PrimaryActorTick.bCanEverTick = true;
	TeamId = FGenericTeamId(10);
}

FGenericTeamId APlayerControllerBase::GetGenericTeamId() const
{
  return TeamId;
}