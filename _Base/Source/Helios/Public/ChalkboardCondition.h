#pragma once
#include "CoreMinimal.h"
#include "BlueprintCondition.h"
#include "ChalkboardSectionKey.h"
#include "ChalkboardCondition.generated.h"

class UChalkboardContext;

UCLASS(Blueprintable, EditInlineNew)
class UChalkboardCondition : public UBlueprintCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UChalkboardContext* mChalkboardContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChalkboardSectionKey mSectionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mValueIfChalkboardIsNotFound;
    
public:
    UChalkboardCondition();

};

