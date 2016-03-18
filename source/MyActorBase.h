// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "MyActorBase.generated.h"

UCLASS(Blueprintable)
class UNREALTEST1_API AMyActorBase : public AActor
{
	GENERATED_BODY()
public:
	
	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "KBE")
	FString server_ip = "";
	UPROPERTY(BlueprintReadWrite, EditAnyWhere, Category = "KBE")
	int server_port = 20013;

	//connect to server.
	UFUNCTION(BlueprintCallable, Category = "KBE")
	virtual void doLogin(FString ip, int port);

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangeEvent) override;
#endif
	

public:	
	// Sets default values for this actor's properties
	AMyActorBase();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;


	
};
