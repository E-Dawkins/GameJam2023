// Fill out your copyright notice in the Description page of Project Settings.


#include "Lock.h"

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
		UE_LOG(LogTemp, Error, TEXT("Key: %s"), *Key->GetName());
	}
}
