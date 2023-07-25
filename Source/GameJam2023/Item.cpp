// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "FirstPersonCharacter.h"
#include "EngineUtils.h"

// Sets default values for this component's properties
AItem::AItem()
{
	
}

// Called when the game starts
void AItem::BeginPlay()
{
	Super::BeginPlay();


}

void AItem::OnInteract()
{
	Super::OnInteract();

	TActorIterator<AFirstPersonCharacter> PlayerItr = TActorIterator<AFirstPersonCharacter>(GetWorld());
	AFirstPersonCharacter* Player = *PlayerItr;

	if (Player)
	{
		Player->Inventory.Add(this);
		SetActorHiddenInGame(true);
		SetActorEnableCollision(false);
	}
}

