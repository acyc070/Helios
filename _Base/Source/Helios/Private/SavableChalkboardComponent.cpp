#include "SavableChalkboardComponent.h"

USavableChalkboardComponent::USavableChalkboardComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mChalkboard = NULL;
    this->mSaveDataCategory = ESaveDataCategory::GameProgression;
}

UChalkboardWrapper* USavableChalkboardComponent::GetChalkboardWrapper() {
    return NULL;
}


