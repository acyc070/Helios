#pragma once
#include "CoreMinimal.h"
#include "PuzzlePieceEditorDropDown.h"
#include "TVChannelReference.h"
#include "TVChannel.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FTVChannel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isConnectedToAnotherTV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTVChannelReference mChannelReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPuzzlePieceEditorDropDown mPuzzlePiece;
    
    FTVChannel();
};

