#pragma once

#include "CoreMinimal.h"
#include "BaseInteractable.h"
#include "ComboButton.generated.h"

UCLASS()
class GAMEJAM2023_API AComboButton : public ABaseInteractable
{
	GENERATED_BODY()

public:
	AComboButton();

	virtual void BeginPlay() override;
	virtual void OnInteract() override;

	void SetActivatedState(bool bState);

public:
	DECLARE_DELEGATE_OneParam(FButtonCallback, AComboButton*);
	TArray<FButtonCallback> Callbacks;

	UPROPERTY(EditAnywhere)
		bool bIsActivated = false;

	UPROPERTY(VisibleAnywhere)
		UStaticMeshComponent* LeverHandle;

	UPROPERTY(EditAnywhere)
		FRotator ActivatedRotation;

	UPROPERTY(EditAnywhere)
		FRotator DeActivatedRotation;
	
};
