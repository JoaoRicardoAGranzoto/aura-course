// Fill out your copyright notice in the Description page of Project Settings.

#include "Animation/AuraBaseAnimInstance.h"
#include "Character/AuraCharacterBase.h"

void UAuraBaseAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();
	
	CharacterBase=Cast<AAuraCharacterBase>(TryGetPawnOwner());
}

void UAuraBaseAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	
	if (CharacterBase)
	{
		
		
		
		
		Speed=CharacterBase->GetVelocity().Length();
	}
}