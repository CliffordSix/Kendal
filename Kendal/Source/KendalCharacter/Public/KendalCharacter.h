#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

/*
 * Kendal Character Module, contains PlayerCharacter related files
 */
class FKendalCharacterModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};
