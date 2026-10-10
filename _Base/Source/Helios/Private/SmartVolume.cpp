#include "SmartVolume.h"

ASmartVolume::ASmartVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mEnabled = true;
    this->mHint = ESmartVolumeHint::None;
    this->mPawnFilter = 4;
    this->mPawnClassFilter = NULL;
}

void ASmartVolume::SetEnabled(bool Enabled) {
}

void ASmartVolume::OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void ASmartVolume::OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}


