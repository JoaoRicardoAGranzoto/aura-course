// Fill out your copyright notice in the Description page of Project Settings.

#include "Animation/EnemyAnimInstance.h"
#include "Character/AuraEnemy.h"

void UEnemyAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	
	CharacterBase=Cast<AAuraEnemy>(TryGetPawnOwner());
	if (CharacterBase)
	{
		MovementComponent=CharacterBase->GetCharacterMovement();
	}
}

void UEnemyAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	
	
	
	
	Super::NativeUpdateAnimation(DeltaSeconds);
	
	if (CharacterBase && MovementComponent)
	{
		Speed=CharacterBase->GetVelocity().Length();
	}
}
