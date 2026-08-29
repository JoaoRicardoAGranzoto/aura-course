// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/AuraCharacter.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

AAuraCharacter::AAuraCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	
	CameraBoom=CreateDefaultSubobject<USpringArmComponent>("CameraBoom");
	CameraBoom->TargetArmLength=500.f;
	CameraBoom->SetupAttachment(GetRootComponent());
	
	FollowCamera=CreateDefaultSubobject<UCameraComponent>("FollowCamera");
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
}




void AAuraCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AAuraCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}




void AAuraCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}