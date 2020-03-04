// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "JN_Item.generated.h"

UCLASS()
class JN_DEMO_API AJN_Item : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AJN_Item();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Propetry")
		FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Propetry")
		FString Description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Propetry")
		FString Category;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Propetry")
		UTexture2D* Image;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Propetry")
		float Weight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Propetry")
		float Volume;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Propetry")
		int32 Amount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Propetry")
		bool IsStackable;
};
