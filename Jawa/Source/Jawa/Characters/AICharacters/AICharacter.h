// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "../CharacterBase.h"
#include "AICharacter.generated.h"

UCLASS(Abstract)
class AAICharacter : public ACharacterBase
{
	GENERATED_BODY()

public:

	AAICharacter();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Character)
	class UAIPerceptionComponent *AIPerceptionComponent;
};

