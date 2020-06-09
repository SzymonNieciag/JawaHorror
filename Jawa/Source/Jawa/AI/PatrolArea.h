// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PatrolArea.generated.h"

UCLASS()
class JAWA_API APatrolArea : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APatrolArea();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ActorSetup")
	UStaticMeshComponent *MainMesh;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	TArray<class APatrolPoint*> PatrolPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	int Priority = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	FName NameArea = "None";

};
