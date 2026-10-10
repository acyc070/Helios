#pragma once
#include "CoreMinimal.h"
#include "HelComponentReference.h"
#include "HeliosNavlinkAttachOptions.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FHeliosNavlinkAttachOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mUseAttachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mRetainOffsetToAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mAttachUpdateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHelComponentReference mLeftAttachment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHelComponentReference mRightAttachment;
    
    FHeliosNavlinkAttachOptions();
};

