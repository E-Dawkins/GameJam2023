// Fill out your copyright notice in the Description page of Project Settings.


#include "ComboLock.h"

// Sets default values
AComboLock::AComboLock()
{

}

// Called when the game starts or when spawned
void AComboLock::BeginPlay()
{
	Super::BeginPlay();
	
	for (auto b : CorrectButtons)
	{
		b->Callbacks.Add(AComboButton::FButtonCallback());
		b->Callbacks.Last().BindUObject(this, &AComboLock::OnButtonPressed);
	}

	for (auto b : WrongButtons)
	{
		b->Callbacks.Add(AComboButton::FButtonCallback());
		b->Callbacks.Last().BindUObject(this, &AComboLock::OnButtonPressed);
	}
}

void AComboLock::OnButtonPressed(AComboButton* PressedButton)
{
	// If any of the wrong 'buttons' are activated, early return
	for (auto b : WrongButtons)
	{
		if (b->bIsActivated)
		{
			return;
		}
	}

	// If any of the correct 'buttons' are not activated, early return
	for (auto b : CorrectButtons)
	{
		if (!b->bIsActivated)
		{
			return;
		}
	}

	OnUnlock();
}

void AComboLock::OnUnlock()
{
	if (ActorToDestroy)
	{
		ActorToDestroy->Destroy();
	}
}
