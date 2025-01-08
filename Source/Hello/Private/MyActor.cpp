// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}


// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
    Super::BeginPlay();

	move();

	UE_LOG(LogTemp, Warning, TEXT("Total Distance: %f"), totDist);
	UE_LOG(LogTemp, Warning, TEXT("Event Count: %d"), evCnt);
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyActor::move()
{
	FVector2D newstart(0.0f, 0.0f);
	FVector2D beforemove(0.0f, 0.0f);
	UE_LOG(LogTemp, Warning, TEXT("Start Location: (%d, %d)"), FMath::RoundToInt(newstart.X), FMath::RoundToInt(newstart.Y));

	for (int i = 0; i < 10; i++)
	{
		
		newstart.X += step();
		newstart.Y += step();

		UE_LOG(LogTemp, Warning, TEXT("Current Location: (%d, %d)"), FMath::RoundToInt(newstart.X), FMath::RoundToInt(newstart.Y));
		UE_LOG(LogTemp, Warning, TEXT("Moved Distance: %f)"), distance(beforemove, newstart));
		createEvent();
		
		beforemove.X += newstart.X - beforemove.X;
		beforemove.Y += newstart.Y - beforemove.Y;
	}
}

int32_t AMyActor::step()
{
	float MinNum = 0;
	float MaxNum = 2;
	float RandomNum = FMath::RandRange(MinNum, MaxNum);
	return RandomNum;
}

float AMyActor::distance(FVector2D first, FVector2D second)
{
	float xDist = second.X - first.X;
	float yDist = second.Y - first.Y;
	float xyDist = sqrt(pow(xDist, 2) + pow(yDist, 2));
	totDist += xyDist;
	return xyDist;
}

void AMyActor::createEvent()
{
	int32 Randomvalue = FMath::RandRange(1, 2);
	if (Randomvalue < 2)
	{
		UE_LOG(LogTemp, Error, TEXT("Event Triggerd!"));
		evCnt++;
	}
}