// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseInteractable.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GAMEJAM2023_API ABaseInteractable : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ABaseInteractable();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	virtual void OnInteract();

	void SetInteractState(bool State);
	bool bShouldInteract = false;

	UPROPERTY(EditInstanceOnly)
		UStaticMeshComponent* StaticMesh;

};
