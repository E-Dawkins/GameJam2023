// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "OrderedLock.generated.h"

class AComboButton;

UCLASS()
class GAMEJAM2023_API AOrderedLock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOrderedLock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	void OnButtonPressed(AComboButton* PressedButton);
	void OnUnlock();

public:
	UPROPERTY(EditAnywhere)
		TArray<AComboButton*> AllButtons;

	UPROPERTY(EditAnywhere)
		TArray<int32> IndicesOrdered;

	UPROPERTY(VisibleAnywhere)
		TArray<int32> IndicesInputted;

	UPROPERTY(EditAnywhere)
		AActor* ActorToDestroy;

};
