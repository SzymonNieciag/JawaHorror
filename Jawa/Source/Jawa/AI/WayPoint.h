// DRAGO Entertainment (c) 2019+

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WayPoint.generated.h"

UCLASS()
class JAWA_API AWayPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWayPoint();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void TargetAchieved();

protected:

};
