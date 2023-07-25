// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseInteractable.h"
#include "ComboButton.generated.h"

/**
 * 
 */
UCLASS()
class GAMEJAM2023_API AComboButton : public ABaseInteractable
{
	GENERATED_BODY()

public:
	virtual void OnInteract() override;

	DECLARE_DELEGATE_OneParam(FButtonCallback, AComboButton*);
	FButtonCallback Callback;
	
};
