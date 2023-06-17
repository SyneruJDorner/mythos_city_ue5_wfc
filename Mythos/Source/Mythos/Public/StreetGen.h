// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "StreetGen.generated.h"

/**
 * 
 */
UCLASS()
class MYTHOS_API UStreetGen : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	/** Please add a function description */
	UFUNCTION(BlueprintCallable, BlueprintPure)
	static void SortByY(UPARAM(ref) TArray<FVector>& ArrayToSort, TArray<FVector>& OutputArray);

};
