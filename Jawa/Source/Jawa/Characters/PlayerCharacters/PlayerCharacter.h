// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "../CharacterBase.h"
#include "PlayerCharacter.generated.h"

UCLASS(config=Game)
class APlayerCharacter : public ACharacterBase
{
	GENERATED_BODY()

public:

	APlayerCharacter();
};

