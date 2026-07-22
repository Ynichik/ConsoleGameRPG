#pragma once
#include "Localization.h"

// У майбутньому сюди можна буде додати інші підсистеми:
// #include "AudioSystem.h"
// #include "SaveManager.h"

struct GameContext {
    Localization& loc;

    // Приклад того, як це розшириться пізніше:
    // AudioSystem& audio;
    // SaveManager& saves;
};
