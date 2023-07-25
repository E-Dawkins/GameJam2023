// Fill out your copyright notice in the Description page of Project Settings.


#include "ModelSwapper.h"

void AModelSwapper::BeginPlay()
{
	Super::BeginPlay();

	StaticMesh->SetStaticMesh(Meshes[CurrentMesh]);
}

void AModelSwapper::OnInteract()
{
	Super::OnInteract();

	UE_LOG(LogTemp, Warning, TEXT("tet"));

	CurrentMesh++;

	if (CurrentMesh >= Meshes.Num())
	{
		CurrentMesh = 0;
	}

	StaticMesh->SetStaticMesh(Meshes[CurrentMesh]);
}
