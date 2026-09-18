// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EnemyAnimInstance.generated.h"

UCLASS()
class AURA_API UEnemyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	
protected:
	
	
	
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Animation")
	float Speed;
	
	UPROPERTY()
	TObjectPtr<class AAuraEnemy> CharacterBase;
	
	UPROPERTY()
	TObjectPtr<class UCharacterMovementComponent> MovementComponent;
};
