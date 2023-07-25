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
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		TArray<AComboButton*> Buttons;

	UPROPERTY(EditAnywhere)
		TArray<AComboButton*> OrderOfButtons;

	UFUNCTION()
		void OnButtonPressed(AComboButton* PressedButton);

};
