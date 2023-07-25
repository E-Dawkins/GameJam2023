// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseInteractable.h"

// Sets default values for this component's properties
ABaseInteractable::ABaseInteractable()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
	SetRootComponent(StaticMesh);

}


// Called when the game starts
void ABaseInteractable::BeginPlay()
{
	Super::BeginPlay();

	UInputComponent* Input = GetWorld()->GetFirstPlayerController()->InputComponent;

	if (Input)
	{
		DECLARE_DELEGATE_OneParam(FBoolInputDelegate, const bool);
		Input->BindAction<FBoolInputDelegate>(TEXT("Interact"), IE_Pressed, this, &ABaseInteractable::SetInteractState, true);
		Input->BindAction<FBoolInputDelegate>(TEXT("Interact"), IE_Released, this, &ABaseInteractable::SetInteractState, false);
	}
}

void ABaseInteractable::OnInteract()
{
	bShouldInteract = false;
}

void ABaseInteractable::SetInteractState(bool State)
{
	bShouldInteract = State;
}
