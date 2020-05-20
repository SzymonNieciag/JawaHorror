// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "AICharacter.h"
#include "Perception/AIPerceptionComponent.h"

AAICharacter::AAICharacter()
{
	AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>("AIPerceptionComponent");
}
