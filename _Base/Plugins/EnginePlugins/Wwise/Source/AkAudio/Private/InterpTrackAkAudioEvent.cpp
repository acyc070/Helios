#include "InterpTrackAkAudioEvent.h"
#include "InterpTrackInstAkAudioEvent.h"

UInterpTrackAkAudioEvent::UInterpTrackAkAudioEvent() {
    this->TrackInstClass = UInterpTrackInstAkAudioEvent::StaticClass();
    this->TrackTitle = TEXT("Ak Audio Event");
    this->bContinueEventOnMatineeEnd = false;
}

const FString UInterpTrackAkAudioEvent::GetEdHelperClassName() const { return FString(); }
const FString UInterpTrackAkAudioEvent::GetSlateHelperClassName() const { return FString(); }

#if WITH_EDITORONLY_DATA
UTexture2D* UInterpTrackAkAudioEvent::GetTrackIcon() const { return nullptr; }
#endif