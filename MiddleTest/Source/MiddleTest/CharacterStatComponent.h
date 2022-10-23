// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CharacterStatComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MIDDLETEST_API UCharacterStatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCharacterStatComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	virtual void InitializeComponent() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


public:
	void SetNewLevel(int32 NewLevel);
	float GetAttack();

private:
	struct FABCharacterData* CurrentStatData = nullptr;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = Stat, Meta = (AllowPrivateAccess = true))
		int32 Level;

	UPROPERTY(Transient, EditInstanceOnly, BlueprintReadWrite, Category = Stat, Meta = (AllowPrivateAccess = true)) // Transient : 직렬화에서 제외.
		float CurrentHP;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = Stat, Meta = (AllowPrivateAccess = true)) // Transient : 직렬화에서 제외.
		float CurrentnextExp;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = Stat, Meta = (AllowPrivateAccess = true)) // Transient : 직렬화에서 제외.
		float CurrentAttackDamage;
		
};
