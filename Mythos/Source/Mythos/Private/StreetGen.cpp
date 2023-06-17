// Fill out your copyright notice in the Description page of Project Settings.


#include "StreetGen.h"

void UStreetGen::SortByY(UPARAM(ref) TArray<FVector>& ArrayToSort, TArray<FVector>& OutputArray)
{
    for (int i = 0; i < ArrayToSort.Num(); i++) {
        OutputArray.Add(ArrayToSort[i]);
    }

    OutputArray.Sort([](const FVector& A, const FVector& B) {
        return A.Y < B.Y;
    });
}
