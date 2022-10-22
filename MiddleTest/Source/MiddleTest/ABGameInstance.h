// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "ABGameInstance.generated.h"

struct FABCharacterData;
class UDataTable;


UCLASS()
class MIDDLETEST_API UABGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UABGameInstance();
	FABCharacterData* GetABCharacterData(int32 Level);

private:
	UPROPERTY()
		UDataTable* ABCharacterTable;
};
