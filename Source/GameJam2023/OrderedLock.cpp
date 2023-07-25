// Fill out your copyright notice in the Description page of Project Settings.

#include "OrderedLock.h"
#include "ComboButton.h"

// Sets default values
AOrderedLock::AOrderedLock()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOrderedLock::BeginPlay()
{
	Super::BeginPlay();

	for (auto b : AllButtons)
	{
		b->Callback.BindUObject(this, &AOrderedLock::OnButtonPressed);
	}
}

void AOrderedLock::OnButtonPressed(AComboButton* PressedButton)
{
	if (AllButtons.IndexOfByKey(PressedButton) == INDEX_NONE)
	{
		UE_LOG(LogTemp, Error, TEXT("Ordered Lock does not know about this button!!"));
	}

	IndicesInputted.Add(AllButtons.IndexOfByKey(PressedButton));

	// Run on last input (1 less than order length)
	if (IndicesInputted.Num() == IndicesOrdered.Num())
	{
		// Check if input sequence was correct
		if (IndicesInputted == IndicesOrdered)
		{
			OnUnlock();
			return;
		}
		else
		{
			IndicesInputted.Empty();

			// Reset all 'buttons'
			for (auto b : AllButtons)
			{
				b->SetActivatedState(false);
			}
		}
	}
}

void AOrderedLock::OnUnlock()
{
	if (ActorToDestroy)
	{
		ActorToDestroy->Destroy();
	}
}

