// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ComboButton.h"

#include "ComboLock.generated.h"

UCLASS()
class GAMEJAM2023_API AComboLock : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AComboLock();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere)
		TArray<AComboButton*> CorrectButtons;

	UPROPERTY(EditAnywhere)
		TArray<AComboButton*> WrongButtons;

	UFUNCTION()
		void OnButtonPressed(AComboButton* PressedButton);

	void OnUnlock();

	UPROPERTY(EditAnywhere)
		AActor* ActorToDestroy;

};
