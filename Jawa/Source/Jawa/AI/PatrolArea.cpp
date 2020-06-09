// Fill out your copyright notice in the Description page of Project Settings.


#include "PatrolArea.h"
#include "Components/StaticMeshComponent.h"
#include "../JawaGameState.h"

// Sets default values
APatrolArea::APatrolArea()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	MainMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MainMesh"));
	RootComponent = MainMesh;
	MainMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

// Called when the game starts or when spawned
void APatrolArea::BeginPlay()
{
	Super::BeginPlay();
	AJawaGameState* const GameState = GetWorld() != NULL ? GetWorld()->GetGameState<AJawaGameState>() : NULL;
	if (GameState)
	{
		GameState->PatrolAreas.AddUnique(this);
	}
	
}

// Called every frame
void APatrolArea::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}