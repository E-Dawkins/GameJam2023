// Fill out your copyright notice in the Description page of Project Settings.


#include "FirstPersonCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "BaseInteractable.h"

// Sets default values
AFirstPersonCharacter::AFirstPersonCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFirstPersonCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFirstPersonCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CheckForInteractable();

}

// Called to bind functionality to input
void AFirstPersonCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AFirstPersonCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AFirstPersonCharacter::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("Yaw"), this, &AFirstPersonCharacter::LookYaw);
	PlayerInputComponent->BindAxis(TEXT("Pitch"), this, &AFirstPersonCharacter::LookPitch);

	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &AFirstPersonCharacter::DoJump);
}

void AFirstPersonCharacter::CheckForInteractable()
{
	FHitResult HitResult;

	FVector PlayerViewLocation;
	FRotator PlayerViewRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(PlayerViewLocation, PlayerViewRotation);

	FVector EndLocation = PlayerViewLocation + PlayerViewRotation.Vector() * InteractDistance;

	bool CanInteract = GetWorld()->LineTraceSingleByChannel
	(
		HitResult, 
		PlayerViewLocation, 
		EndLocation,
		ECC_Visibility
	);

	CurrentInteractee = Cast<UBaseInteractable>(HitResult.GetActor()->GetComponentByClass(UBaseInteractable::StaticClass()));

	if (CanInteract && CurrentInteractee)
	{
		UE_LOG(LogTemp, Warning, TEXT("Can interact with base interactable!!!"));
	}
}

#pragma region Input Functions
void AFirstPersonCharacter::MoveForward(float AxisValue)
{
	AddMovementInput(GetActorForwardVector(), AxisValue * MoveSpeed);
}

void AFirstPersonCharacter::MoveRight(float AxisValue)
{
	AddMovementInput(GetActorRightVector(), AxisValue * MoveSpeed);
}

void AFirstPersonCharacter::LookYaw(float AxisValue)
{
	AddControllerYawInput(AxisValue * LookSpeed);
}

void AFirstPersonCharacter::LookPitch(float AxisValue)
{
	AddControllerPitchInput(AxisValue * LookSpeed);
}

void AFirstPersonCharacter::DoJump()
{
	Jump();
}
#pragma endregion
