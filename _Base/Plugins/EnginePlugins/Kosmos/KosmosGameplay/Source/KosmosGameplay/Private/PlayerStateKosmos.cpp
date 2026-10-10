#include "PlayerStateKosmos.h"
#include "Net/UnrealNetwork.h"

APlayerStateKosmos::APlayerStateKosmos(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerPawn = NULL;
}

void APlayerStateKosmos::KosmosDebugCmdServer_Implementation(const FString& InCmdStr) {
}
bool APlayerStateKosmos::KosmosDebugCmdServer_Validate(const FString& InCmdStr) {
    return true;
}

void APlayerStateKosmos::KosmosDebugCmdLocal(const FString& InCmdStr) {
}

void APlayerStateKosmos::KosmosDebugCmdClient_Implementation(const FString& InCmdStr) {
}

void APlayerStateKosmos::KosmosDebugCmd(const FString& InCmdStr) {
}

void APlayerStateKosmos::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APlayerStateKosmos, PlayerPawn);
}


