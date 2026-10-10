#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CollectibleDelegateDelegate.h"
#include "ECollectibleCategory.h"
#include "CollectibleComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class HELIOS_API UCollectibleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollectibleCategory CollectibleCategory;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollectibleDelegate OnCollected;
    
    UCollectibleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsCollected() const;
    
    UFUNCTION(BlueprintCallable)
    bool Collect();
    
};

