#include "ComboButton.h"

AComboButton::AComboButton()
{
	LeverHandle = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Lever"));
	LeverHandle->SetupAttachment(RootComponent);
}

void AComboButton::BeginPlay()
{
	Super::BeginPlay();

	SetActivatedState(bIsActivated);
}

void AComboButton::OnInteract()
{
	Super::OnInteract();

	SetActivatedState(!bIsActivated);
	Callback.ExecuteIfBound(this);
}

void AComboButton::SetActivatedState(bool bState)
{
	bIsActivated = bState;

	if (LeverHandle)
	{
		LeverHandle->SetRelativeRotation(bIsActivated ? ActivatedRotation : DeActivatedRotation);
	}
}
