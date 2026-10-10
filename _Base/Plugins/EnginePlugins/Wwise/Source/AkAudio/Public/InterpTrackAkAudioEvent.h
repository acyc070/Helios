#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackVectorBase.h"
#include "AkAudioEventTrackKey.h"
#include "InterpTrackAkAudioEvent.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class AKAUDIO_API UInterpTrackAkAudioEvent : public UInterpTrackVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAkAudioEventTrackKey> Events;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bContinueEventOnMatineeEnd: 1;

    UInterpTrackAkAudioEvent();

    // UInterpTrack's editor-helper virtuals are not exported from the engine DLL
    // (the class is MinimalAPI), so override them to satisfy the linker.
    // Note: the return type is `const FString`, not `FString`.
    virtual const FString GetEdHelperClassName() const override;
    virtual const FString GetSlateHelperClassName() const override;

#if WITH_EDITORONLY_DATA
    virtual UTexture2D* GetTrackIcon() const override;
#endif
};