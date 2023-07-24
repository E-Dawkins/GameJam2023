// Fill out your copyright notice in the Description page of Project Settings.


#include "ComboLock.h"

// Sets default values
AComboLock::AComboLock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AComboLock::BeginPlay()
{
	Super::BeginPlay();
	
	for (auto b : Buttons)
	{
		b->Callback.BindUObject(this, &AComboLock::OnButtonPressed);
	}

}

// Called every frame
void AComboLock::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AComboLock::OnButtonPressed(AComboButton* PressedButton)
{
	 
}
