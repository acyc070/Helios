#include "GoInvestigateVolumeAction.h"

UGoInvestigateVolumeAction::UGoInvestigateVolumeAction() {
    this->mNavigationOptions = NULL;
    this->mGoalRadius = -1.00f;
    this->mInvestigateVolumeActor = NULL;
}

void UGoInvestigateVolumeAction::ReachedInvestigateLocation_Implementation(AActor* volumeActor) {
}


