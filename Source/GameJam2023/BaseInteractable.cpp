// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseInteractable.h"

// Sets default values for this component's properties
UBaseInteractable::UBaseInteractable()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.

}


// Called when the game starts
void UBaseInteractable::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UBaseInteractable::OnInteract()
{
}
