#ifndef KEYBOARD_CONTROLLER_H
#define KEYBOARD_CONTROLLER_H

#include "controller.h"

class KeyboardController : public Controller {

public:
    void HandleInput(GameStateManager &, Cannon &) const override;
};

#endif // KEYBOARD_CONTROLLER_H
