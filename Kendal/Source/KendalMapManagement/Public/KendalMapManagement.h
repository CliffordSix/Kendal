#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

/*
 * Module for building and managing the world.
 */
class FKendalMapManagementModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};
