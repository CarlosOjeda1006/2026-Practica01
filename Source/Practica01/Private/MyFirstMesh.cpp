// Fill out your copyright notice in the Description page of Project Settings.


#include "MyFirstMesh.h"
//#include "ConstructorHelpers.h"

// Sets default values
AMyFirstMesh::AMyFirstMesh()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("/Script/Engine.StaticMesh'/Engine/EngineMeshes/SM_MatPreviewMesh_01.SM_MatPreviewMesh_01'"));

	RootComponent = StaticMeshComponent;
}

// Called when the game starts or when spawned
void AMyFirstMesh::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyFirstMesh::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

