// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealTest1.h"
#include "MyActorBase.h"
//#include "ExampleLibrary.h"


// Sets default values
AMyActorBase::AMyActorBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//GetGameInstance()->StartRecordingReplay();

}

// Called when the game starts or when spawned
void AMyActorBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActorBase::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void AMyActorBase::doLogin(FString ip, int32 port)
{
	//
	//KBE_login2("123.59.72.3", 20013);
	//log("TODO LOGIN!");


}

#if WITH_EDITOR
void AMyActorBase::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangeEvent)
{
	server_port = 20013;
	server_ip = "127.0.0.1";
	Super::PostEditChangeProperty(PropertyChangeEvent);

}
#endif