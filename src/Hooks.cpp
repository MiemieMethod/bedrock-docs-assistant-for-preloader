#include "memory_utils/hook.h"
#include <iostream>

#pragma region HOOK

class DedicatedServer {};

LP_AUTO_TYPED_INSTANCE_HOOK(
    DedicatedServer_isEduMode,
    memory::HookPriority::Normal,
    DedicatedServer,
    "?isEduMode@DedicatedServer@@EEBA_NXZ",
    bool,
) {
    std::cout << "DedicatedServer_isEduMode hooked!!" << std::endl;
    origin();
    return true;
}

#pragma endregion HOOK