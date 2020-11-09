//© Neonzz Games © 2020

#include "DrawDebugHelpers.h"
#include "GrabberComponent.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"

#define OUT
// Sets default values for this component's properties
UGrabberComponent::UGrabberComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UGrabberComponent::BeginPlay()
{
	Super::BeginPlay();

	FindPhysicsHandle();
	
	SetupInputComponent();
}

// Called every frame
void UGrabberComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	

}

void UGrabberComponent::FindPhysicsHandle()
{
	PhysicsHandle = GetOwner()->FindComponentByClass<UPhysicsHandleComponent>();

	//Is there a handle?

	if (!PhysicsHandle)
	{
		UE_LOG(LogTemp, Error, TEXT("No Physics handle! on: %s"), *GetOwner()->GetName())
	}

}

FHitResult UGrabberComponent::GetFirstPhysicsBodyInReach() const
{
	// Get Player viewpoint

	OUT FVector PlayerViewLocation;
	OUT FRotator PlayerViewRotation;

	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(
		PlayerViewLocation,
		PlayerViewRotation
	);

	//Reach for target (raycast) 
	FVector LineTraceEnd = PlayerViewLocation + PlayerViewRotation.Vector() * Reach;

	OUT FHitResult Hit;

	AActor* ActorHit = Hit.GetActor();

	FCollisionQueryParams TraceParam(FName(TEXT("")), false, GetOwner());

	GetWorld()->LineTraceSingleByObjectType(
		Hit,
		PlayerViewLocation,
		LineTraceEnd,
		FCollisionObjectQueryParams(ECollisionChannel::ECC_PhysicsBody),
		TraceParam
	);

	UE_LOG(LogTemp, Error, TEXT("Hit objects: %s"), *ActorHit->GetName())
	return Hit;
}

void UGrabberComponent::SetupInputComponent()
{
	//Bind input made in unreal
	InputComponent = GetOwner()->FindComponentByClass<UInputComponent>();

	InputComponent->BindAction("Grab", IE_Pressed, this, &UGrabberComponent::Grab);

	InputComponent->BindAction("Drop", IE_Released, this, &UGrabberComponent::Release);
}

void UGrabberComponent::Grab()
{
	//See what were hitting

	UE_LOG(LogTemp, Warning, TEXT("Grabbing"));
	GetFirstPhysicsBodyInReach();
}

void UGrabberComponent::Release()
{
	UE_LOG(LogTemp, Warning, TEXT("Realised"));
}

