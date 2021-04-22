// Sudip Mondal


#include "ShooterAIController.h"

#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

void AShooterAIController::BeginPlay() 
{
    Super::BeginPlay();
    PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

    if (AIBehavior != nullptr)
    {
        RunBehaviorTree(AIBehavior);
    }


}

void AShooterAIController::Tick(float DeltaSeconds) 
{
    Super::Tick(DeltaSeconds);
    
    // if (LineOfSightTo(PlayerPawn))
    // {
    //     SetFocus(PlayerPawn);
    //     MoveToActor(PlayerPawn, AcceptanceRadius);
    // }
    // else
    // {
    //     ClearFocus(EAIFocusPriority::Gameplay);
    //     StopMovement();
    // }

}
