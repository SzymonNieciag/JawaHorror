// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIControllerBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSenseAIUpdate);

UCLASS()
class JAWA_API AAIControllerBase : public AAIController
{
	GENERATED_BODY()

public:

	AAIControllerBase(const FObjectInitializer& ObjectInitializer);
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = AI)
	class UAIPerceptionComponent *AIPerceptionComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AI)
	class AAICharacter *AICharacter;

public:

	virtual void OnPossess(APawn* InPawn) override;

	/** Called on completing current movement request */
	virtual void OnMoveCompleted(FAIRequestID RequestID, const FPathFollowingResult& Result) override;

	ETeamAttitude::Type GetTeamAttitudeTowards(const AActor& Other) const override;

private: 

  // Implement The Generic Team Interface 
	FGenericTeamId TeamId;

public:

	UFUNCTION(BlueprintCallable, Category = AIPerception)
	FGenericTeamId GetGenericTeamId() const override;

	/** Assigns Team Agent to given TeamID */
	UFUNCTION(BlueprintCallable, Category = AIPerception)
	virtual void SetGenericTeamId(const FGenericTeamId& TeamID) override;

	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category = "AI")
	FSenseAIUpdate OnSenseAIUpdated;

};
