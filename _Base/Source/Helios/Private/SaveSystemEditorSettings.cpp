#include "SaveSystemEditorSettings.h"

USaveSystemEditorSettings::USaveSystemEditorSettings() {
    this->mLoadBehaviour = ESaveSystemPIELoadBehaviour::AlwaysResetWhenStartingNewPlayInEditorSession;
    this->mSaveBehaviour = ESaveSystemPIESaveBehaviour::OnlySaveToMemory;
}


