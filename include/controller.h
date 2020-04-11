#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "cannon.h"
#include "game_state.h"

class Controller {
public:
    virtual void HandleInput(GameStateManager &, Cannon &) const = 0;
};

#endif // CONTROLLER_H
