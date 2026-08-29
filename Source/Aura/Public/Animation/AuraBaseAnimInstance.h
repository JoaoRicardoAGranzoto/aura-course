// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AuraBaseAnimInstance.generated.h"

UCLASS()
class AURA_API UAuraBaseAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	
protected:
	
	
	
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Animation")
	float Speed;
	
	UPROPERTY()
	TObjectPtr<class AAuraCharacterBase> CharacterBase;
};
