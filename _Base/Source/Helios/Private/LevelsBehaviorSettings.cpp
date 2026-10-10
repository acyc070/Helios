#include "LevelsBehaviorSettings.h"

ULevelsBehaviorSettings::ULevelsBehaviorSettings() {
    this->mSceneComponentsReloadingStrategy = ESoftReloadingSceneComponentsTransformStrategy::SaveWorldTransform;
}


