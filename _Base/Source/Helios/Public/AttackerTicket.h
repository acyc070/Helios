#pragma once
#include "CoreMinimal.h"
#include "AttackerTicket.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct HELIOS_API FAttackerTicket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* mActor;
    
    FAttackerTicket();
};

