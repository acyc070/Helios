#pragma once
#include "CoreMinimal.h"
#include "CharacterAnimStateSetup.h"
#include "CharacterAnimStateGroup.generated.h"

USTRUCT(BlueprintType)
struct HELIOS_API FCharacterAnimStateGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName groupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterAnimStateSetup> States;
    
    FCharacterAnimStateGroup();
};

