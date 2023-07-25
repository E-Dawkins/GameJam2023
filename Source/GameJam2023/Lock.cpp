// Fill out your copyright notice in the Description page of Project Settings.


#include "Lock.h"
#include "FirstPersonCharacter.h"
#include "EngineUtils.h"

// Sets default values for this component's properties
ALock::ALock()
{

}


// Called when the game starts
void ALock::BeginPlay()
{
	Super::BeginPlay();
	
}

void ALock::OnInteract()
{
	Super::OnInteract();

	if (Key)
	{
		TActorIterator<AFirstPersonCharacter> PlayerItr = TActorIterator<AFirstPersonCharacter>(GetWorld());
		AFirstPersonCharacter* Player = *PlayerItr;

		if (Player && Player->Inventory.Contains(Key))
		{
			OnUnlock();
		}
	}
}

void ALock::OnUnlock()
{
	if (ActorToDestroy)
	{
		ActorToDestroy->Destroy();
	}
}
