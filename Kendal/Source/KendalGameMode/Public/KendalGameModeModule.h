#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

/*
 * Kendal Game Mode module, contains GameMode relevant files
 */
class FKendalGameModeModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};
