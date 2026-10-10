#include "InterpTrackAkAudioRTPC.h"
#include "InterpTrackInstAkAudioEvent.h"

UInterpTrackAkAudioRTPC::UInterpTrackAkAudioRTPC() {
    this->TrackInstClass = UInterpTrackInstAkAudioEvent::StaticClass();
    this->TrackTitle = TEXT("Ak Audio RTPC");
    this->bPlayOnReverse = false;
    this->bContinueRTPCOnMatineeEnd = false;
}

const FString UInterpTrackAkAudioRTPC::GetEdHelperClassName() const { return FString(); }
const FString UInterpTrackAkAudioRTPC::GetSlateHelperClassName() const { return FString(); }

#if WITH_EDITORONLY_DATA
UTexture2D* UInterpTrackAkAudioRTPC::GetTrackIcon() const { return nullptr; }
#endif