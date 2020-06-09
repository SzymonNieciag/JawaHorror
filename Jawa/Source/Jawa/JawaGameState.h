// DRAGO Entertainment (c) 2019+

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "JawaGameState.generated.h"

UCLASS()
class JAWA_API AJawaGameState : public AGameStateBase
{
	GENERATED_BODY()
	
protected:

	void BeginPlay();

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AI")
	TArray<class APatrolArea*> PatrolAreas;
};


