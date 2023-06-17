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

	/** Duplicate the contents of given array to a new array sorted by the Y coordinate */
	UFUNCTION(BlueprintCallable, BlueprintPure)
	static void SortByY(UPARAM(ref) TArray<FVector>& ArrayToSort, TArray<FVector>& OutputArray);


	///** Please add a function description */
	//UFUNCTION(BlueprintCallable, BlueprintPure)
	//static void InsertIntoQueue(UPARAM(ref) TArray<FVector>& Queue, TArray<FVector>& OutputArray);

};
