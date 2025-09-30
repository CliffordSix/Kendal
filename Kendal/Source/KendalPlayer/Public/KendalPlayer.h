#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

/*
 * Module for player controller and related classes
 */
class FKendalPlayerModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};
