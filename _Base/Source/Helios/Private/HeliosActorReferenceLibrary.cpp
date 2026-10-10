#include "HeliosActorReferenceLibrary.h"

UHeliosActorReferenceLibrary::UHeliosActorReferenceLibrary() {
}

FHeliosActorReference UHeliosActorReferenceLibrary::MakeHeliosActorReference(FHeliosActorReference actorReference) {
    return FHeliosActorReference{};
}

bool UHeliosActorReferenceLibrary::IsValid(const FHeliosActorReference& actorReference) {
    return false;
}

bool UHeliosActorReferenceLibrary::IsNull(const FHeliosActorReference& actorReference) {
    return false;
}

AActor* UHeliosActorReferenceLibrary::GetActor(const FHeliosActorReference& actorReference, bool bForceCLO) {
    return NULL;
}


