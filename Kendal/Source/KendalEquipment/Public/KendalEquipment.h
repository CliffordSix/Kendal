#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

/*
 * Module for equipable items
 */
class FKendalEquipmentModule : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
};
