// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealTest1.h"
#include "MyActorBase.h"



//#include "../../Plugins/HelloUE4Plugin/Source/ThirdParty/HelloUE4PluginLibrary/ExampleLibrary.h"
//#include "C://Users//cnsoft//Documents//Unreal Projects//UnrealTest1//Plugins//HelloUE4Plugin//Source//ThirdParty//HelloUE4PluginLibrary//ExampleLibrary.h"

//#define   LIBPATH(p,f)   p##f 
//#pragma   comment(lib,LIBPATH(__FILE__,   "..\\..\\Plugins\\HelloUE4Plugin\\Source\\ThirdParty\\HelloUE4PluginLibrary\\x64\\Debug\\ExampleLibrary.lib"))

//#pragma comment(lib,"..\\..\\Plugins\\HelloUE4Plugin\\Source\\ThirdParty\\HelloUE4PluginLibrary\\x64\\Release\\ExampleLibrary.lib")

//#pragma comment(lib , "C:\\Users\\cnsoft\\Documents\\Unreal Projects\\UnrealTest1\\Plugins\\HelloUE4Plugin\\Source\\ThirdParty\\HelloUE4PluginLibrary\\x64\\Debug\\ExampleLibrary.lib")

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
	MessageBox(NULL, TEXT("Hello world!"), NULL, MB_OK);
	//KBE_login2("123.59.72.3", 20013);
	//log("TODO LOGIN!");
	//KBE_Register(gotChatMsg);
	//Register callback of got chat msg.
	KBE_login2("123.59.72.3", 20013);

}

void AMyActorBase::doChat(FString msg)
{
	MessageBox(NULL, TEXT("Chat Send" ), NULL, MB_OK);
	//log("TODO LOGIN!");
	//KBE_SendChat(msg);
	char a[10] = "hello";
	KBE_send(a);
	

}


#if WITH_EDITOR
void AMyActorBase::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangeEvent)
{
	server_port = 20013;
	server_ip = "127.0.0.1";
	Super::PostEditChangeProperty(PropertyChangeEvent);

}
#endif