// DRAGO Entertainment (c) 2019+

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "JawaFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class JAWA_API UJawaFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = "AI|Navigation")
	static AActor* GetClosestActorToLocation(FVector Instaginatorlocation, TArray<AActor*> Actors);

};
