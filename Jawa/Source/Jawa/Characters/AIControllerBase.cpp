// Fill out your copyright notice in the Description page of Project Settings.


#include "AIControllerBase.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AISenseConfig_Hearing.h"


AAIControllerBase::AAIControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>("AIPerceptionComponent");
	TeamId = FGenericTeamId(1);
}

void AAIControllerBase::OnPossess(APawn * InPawn)
{
	Super::OnPossess(InPawn);
}

void AAIControllerBase::OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult & Result)
{
	Super::OnMoveCompleted(RequestID,Result);
}

ETeamAttitude::Type AAIControllerBase::GetTeamAttitudeTowards(const AActor & Other) const
{
	if(const APawn* OtherPawn = Cast<APawn>(&Other))
	{
		if (const IGenericTeamAgentInterface* TeamAgent = Cast<IGenericTeamAgentInterface>(OtherPawn->GetController()))
		{
			//Create an alliance with Team with ID 10 and set all the other teams as Hostiles:
			FGenericTeamId OtherTeamID = TeamAgent->GetGenericTeamId();
			if (OtherTeamID == TeamId)
			{
				return ETeamAttitude::Friendly;
			}
			if (OtherTeamID == 255)
			{
				return ETeamAttitude::Neutral;
			}
			else 
			{
				return ETeamAttitude::Hostile;
			}
		}
	}
	return ETeamAttitude::Neutral;
}

FGenericTeamId AAIControllerBase::GetGenericTeamId() const
{
	return TeamId;
}

void AAIControllerBase::SetGenericTeamId(const FGenericTeamId& NewTeamID)
{
	TeamId = NewTeamID;
}
