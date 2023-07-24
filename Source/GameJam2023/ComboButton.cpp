// Fill out your copyright notice in the Description page of Project Settings.


#include "ComboButton.h"

void AComboButton::OnInteract()
{
	Super::OnInteract();

	Callback.Execute(this);
}
