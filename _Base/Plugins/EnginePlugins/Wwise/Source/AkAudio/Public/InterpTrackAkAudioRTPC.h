#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "InterpTrackAkAudioRTPC.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Param;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlayOnReverse: 1;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bContinueRTPCOnMatineeEnd: 1;

    UInterpTrackAkAudioRTPC();

    // UInterpTrack's editor-helper virtuals are not exported from the engine DLL
    // (the class is MinimalAPI), so override them to satisfy the linker.
    // Note: the return type is `const FString`, not `FString`.
    virtual const FString GetEdHelperClassName() const override;
    virtual const FString GetSlateHelperClassName() const override;

#if WITH_EDITORONLY_DATA
    virtual UTexture2D* GetTrackIcon() const override;
#endif
};