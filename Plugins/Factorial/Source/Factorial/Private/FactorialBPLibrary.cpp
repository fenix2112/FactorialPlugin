// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "FactorialBPLibrary.h"
#include "Factorial.h"

UFactorialBPLibrary::UFactorialBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

int32 UFactorialBPLibrary::FactorialSampleFunction(int32 Param)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, FString("FactorialSampleFunction"));
	int32 res = 1;
	if (Param < 0 )
	{
		res = 0;
	}
	else {

		for (int i = 1; i <= Param; i++) {
			res *= i;
		}
	}
	return res;
}

