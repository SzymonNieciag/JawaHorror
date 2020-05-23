// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GenericTeamAgentInterface.h"
#include "PlayerControllerBase.generated.h"

/**
 * 
 */
UCLASS()
class JAWA_API APlayerControllerBase : public APlayerController, public IGenericTeamAgentInterface
{
	GENERATED_BODY()
	
public:

	APlayerControllerBase();

private: 

	// Implement The Generic Team Interface 
	FGenericTeamId TeamId;

	UFUNCTION(BlueprintCallable, Category = AIPerception)
	FGenericTeamId GetGenericTeamId() const override;

	/** Assigns Team Agent to given TeamID */
	UFUNCTION(BlueprintCallable, Category = AIPerception)
	virtual void SetGenericTeamId(const FGenericTeamId& TeamID) override;
};
