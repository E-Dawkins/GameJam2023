// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Item.h"

#include "FirstPersonCharacter.generated.h"

UCLASS()
class GAMEJAM2023_API AFirstPersonCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFirstPersonCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	void CheckForInteractable();

	// --- Input Functions ---
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
	void LookYaw(float AxisValue);
	void LookPitch(float AxisValue);

	void DoJump();

public:
	UPROPERTY(EditAnywhere)
		float InteractDistance = 500;

	UPROPERTY(EditAnywhere)
		float MoveSpeed = 10;

	UPROPERTY(EditAnywhere)
		float LookSpeed = 1;

	UPROPERTY(VisibleAnywhere)
		TArray<AItem*> Inventory;

	UPROPERTY(EditAnywhere) TSubclassOf<class UUserWidget> HUDClass;
	UPROPERTY() UUserWidget* HUD;

	UPROPERTY(EditAnywhere) TSubclassOf<class UUserWidget> HUDInteractClass;
	UPROPERTY() UUserWidget* HUD_Interact;

private:
	UPROPERTY()
		ABaseInteractable* CurrentInteractee;
};
