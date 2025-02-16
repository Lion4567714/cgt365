// Fill out your copyright notice in the Description page of Project Settings.


#include "ElementSystem.h"

// Sets default values
AElementSystem::AElementSystem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AElementSystem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AElementSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

