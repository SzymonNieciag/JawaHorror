// DRAGO Entertainment (c) 2019+


#include "JawaFunctionLibrary.h"
#include "GameFramework/Actor.h"

AActor* UJawaFunctionLibrary::GetClosestActorToLocation(FVector Instaginatorlocation, TArray<AActor*> Actors)
{
	if (Actors.Num()!=0)
	{
		float AveDistance = 9999999999;

		AActor* ClosestActor = nullptr;

		for (int i = 0; i < Actors.Num(); i++)
		{
			if (Actors[i] != NULL)
			{
				float CurrentDistance = FVector::DistSquared(Instaginatorlocation, Actors[i]->GetActorLocation());
				if (CurrentDistance < AveDistance)
				{
					AveDistance = CurrentDistance;
					ClosestActor = Actors[i];
				}
			}
		}
		return ClosestActor;
	}
	return NULL;
}