// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseInteractable.h"

#include "Item.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GAMEJAM2023_API AItem : public ABaseInteractable
{
	GENERATED_BODY() 

public:	
	// Sets default values for this component's properties
	AItem();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	virtual void OnInteract() override;
		
};
