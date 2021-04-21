// Sudip Mondal


#include "ShooterAIController.h"

#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

void AShooterAIController::BeginPlay() 
{
    Super::BeginPlay();
    PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    SetFocus(PlayerPawn);

}

void AShooterAIController::Tick(float DeltaSeconds) 
{
    Super::Tick(DeltaSeconds);
    
    MoveToActor(PlayerPawn, 200);
}
