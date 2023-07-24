// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include "FirstPersonCharacter.h"

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

	AFirstPersonCharacter* Player = Cast<AFirstPersonCharacter>(GetWorld()->GetFirstPlayerController()->GetOwner());
	
	if (Player)
	{
		UE_LOG(LogTemp, Error, TEXT("Player: %s"), *Player->GetName());
	}
}

