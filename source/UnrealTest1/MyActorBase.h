// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


//#include "HelloUE4Plugin.h"

#include "ExampleLibrary.h"

#include "GameFramework/Actor.h"
#include "MyActorBase.generated.h"


UCLASS(Blueprintable)
class UNREALTEST1_API AMyActorBase : public AActor
{
	GENERATED_BODY()
public:
	
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="KBE")
	FString server_ip = "127.0.0.1";
	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="KBE")
	int32 server_port = 20013;
	UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="KBE")
	float  server_interval = 15;
	//connect to server.
	UFUNCTION(BlueprintCallable,Category="KBE")
	virtual void doLogin(FString ip, int32 port);

	//
	//connect to server.
	UFUNCTION(BlueprintCallable, Category = "KBE")
	virtual void doChat(FString msg);


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
