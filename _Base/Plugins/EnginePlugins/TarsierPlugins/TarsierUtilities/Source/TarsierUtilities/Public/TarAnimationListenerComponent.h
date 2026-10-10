#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TarAnimListenerSignatureDelegate.h"
#include "TarNamedAnimNotifySignatureDelegate.h"
#include "TarAnimationListenerComponent.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TARSIERUTILITIES_API UTarAnimationListenerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkeletalMeshComponentName;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarAnimListenerSignature PreProcessAnimNotifies;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarAnimListenerSignature PostProcessAnimNotifies;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarNamedAnimNotifySignature OnAnimNotfiy;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
public:
    UTarAnimationListenerComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnSubstepMeshStepped(float stepTime);
    
};

