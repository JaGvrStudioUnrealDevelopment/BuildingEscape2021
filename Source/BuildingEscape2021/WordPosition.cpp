// Fill out your copyright notice in the Description page of Project Settings.


#include "WordPosition.h"
#include "GameFramework/Actor.h"

// Sets default values for this component's properties
UWordPosition::UWordPosition()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UWordPosition::BeginPlay()
{
	Super::BeginPlay();
	
	
	FString Name=GetOwner()->GetName();
	/* FString Log=TEXT("Hello");
	FString* PtrLog=&Log;
	PtrLog->Len();*/
	UE_LOG(LogTemp,Warning,TEXT("%s"), *Name); 
}


// Called every frame
void UWordPosition::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

