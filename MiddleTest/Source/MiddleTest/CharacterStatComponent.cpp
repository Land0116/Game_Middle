// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterStatComponent.h"
#include "ABGameInstance.h"
#include "CustomDataTables.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UCharacterStatComponent::UCharacterStatComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	bWantsInitializeComponent = true; // 이걸 true해야 InitializeComponent 함수가 호출됨.
	Level = 1;
	// ...
}


// Called when the game starts
void UCharacterStatComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UCharacterStatComponent::InitializeComponent()
{
	Super::InitializeComponent();
	SetNewLevel(Level);
}

void UCharacterStatComponent::SetNewLevel(int32 NewLevel)
{
	UABGameInstance* ABGameInstance = Cast<UABGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	if (nullptr == ABGameInstance) return;

	CurrentStatData = ABGameInstance->GetABCharacterData(NewLevel);
	if (CurrentStatData)
	{
		Level = NewLevel;
		CurrentHP = CurrentStatData->MaxHP;
		CurrentnextExp = CurrentStatData->NextExp;
		CurrentAttackDamage = CurrentStatData->AttackDamage;

		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Cyan, FString::Printf(TEXT("Level : %d "), NewLevel));
		GEngine->AddOnScreenDebugMessage(1, 10.0f, FColor::Cyan, FString::Printf(TEXT("MaxHP : %.1f"), CurrentHP));
		GEngine->AddOnScreenDebugMessage(2, 10.0f, FColor::Cyan, FString::Printf(TEXT("NextExp : %.1f"), CurrentnextExp));
		GEngine->AddOnScreenDebugMessage(3, 10.0f, FColor::Cyan, FString::Printf(TEXT("AttackDamage : %.0f"), CurrentAttackDamage));

	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(TEXT("Level %d data doesn't exist."), NewLevel));
	}
}

float UCharacterStatComponent::GetAttack()
{
	if (nullptr == CurrentStatData) return 0.0f;

	return CurrentStatData->AttackDamage;
}

// Called every frame
void UCharacterStatComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

