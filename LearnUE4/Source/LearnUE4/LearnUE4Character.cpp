// Fill out your copyright notice in the Description page of Project Settings.


#include "LearnUE4Character.h"

// Sets default values
ALearnUE4Character::ALearnUE4Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ALearnUE4Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALearnUE4Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ALearnUE4Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

