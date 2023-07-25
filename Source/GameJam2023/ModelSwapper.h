// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseInteractable.h"
#include "ModelSwapper.generated.h"

/**
 * 
 */
UCLASS()
class GAMEJAM2023_API AModelSwapper : public ABaseInteractable
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	virtual void OnInteract() override;

	UPROPERTY(EditAnywhere)
		TArray<UStaticMesh*> Meshes;

	int CurrentMesh = 0;
	
};
