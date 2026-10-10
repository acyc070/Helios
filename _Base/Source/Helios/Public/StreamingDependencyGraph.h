#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "StreamingDependencyGraph.generated.h"

class ULevelStreaming;

UCLASS(Blueprintable)
class HELIOS_API UStreamingDependencyGraph : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelStreaming*> mNodes;
    
public:
    UStreamingDependencyGraph();

};

