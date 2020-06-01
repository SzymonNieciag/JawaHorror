// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "../CharacterBase.h"
#include "AICharacter.generated.h"

UENUM(BlueprintType)
enum class EAICharacterState :uint8
{
	Idle = 0 UMETA(DisplayName = "Idle"),
	Searching = 1 UMETA(DisplayName = "Searching"),
	Attacking = 2 UMETA(DisplayName = "Attacking"),
};

UCLASS(Abstract)
class AAICharacter : public ACharacterBase
{
	GENERATED_BODY()

public:

	AAICharacter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	TArray <class AActor*> WayPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	class AActor* TargetActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Character")
	EAICharacterState AICharacterState = EAICharacterState::Idle;

};

