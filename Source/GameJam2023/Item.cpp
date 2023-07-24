// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"

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

	UE_LOG(LogTemp, Warning, TEXT("Item Picked UP"));

}

