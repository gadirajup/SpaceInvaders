#include <iostream>
#include <vector>
#include "renderer.h"
#include "keyboard_controller.h"
#include "game.h"

#define FPS 60
#define WINDOW_WIDTH 600
#define WINDOW_HEIGHT 400

int main() {
    constexpr int windowOffset = 20;

    const std::string bgFile = "./assets/space.png";
    const std::string spriteFile = "./assets/sprites.png";

    constexpr int DELAY_TIME = static_cast<const int>(1000.0f / FPS);

    const std::vector<Rect> projectileAnimations {
        {20, 60, 20, 14}
    };

    const std::vector<Rect> cannonAnimations {
        {20, 42, 20, 18},
        {0,  42, 20, 18}
    };

    const std::vector<Rect> bombAnimations {
        {0, 69, 20, 14}
    };
    const std::vector<std::vector<Rect>> invaderAnimations {
        {
                {0, 0,  20, 14},
                {20, 0,  20, 14},
                {0, 58, 20, 14}
        },
        {
                {0, 14, 20, 14},
                {20, 14, 20, 14},
                {0, 58, 20, 14}
        },
        {
                {0, 28, 20, 14},
                {20, 28, 20, 14},
                {0, 58, 20, 14}
        }
    };

    constexpr int moveCannonByPx = 2;
    constexpr int enemyAnimationSpeedMs = 500;
    constexpr int increaseAnimationSpeedByMs = 20;
    constexpr int numInvadersPerRow = 5;
    const int numInvaderRows = invaderAnimations.size();
    constexpr bool useHardwareAcceleration = false;

    auto projectile = std::shared_ptr<Sprite>(new Sprite(projectileAnimations));
    auto cannon = std::shared_ptr<Cannon>(new Cannon(cannonAnimations, WINDOW_WIDTH, WINDOW_HEIGHT, projectile, moveCannonByPx));
    auto bomb = std::shared_ptr<Sprite>(new Sprite(bombAnimations));
    auto invaderList = std::shared_ptr<InvaderList>(
            new InvaderList(enemyAnimationSpeedMs, increaseAnimationSpeedByMs, numInvaderRows, numInvadersPerRow,
                            windowOffset, WINDOW_WIDTH - windowOffset, WINDOW_HEIGHT - windowOffset, bomb));

    for (int row = 0; row < numInvaderRows; row++) {
        for (int col = 0; col < numInvadersPerRow; col++) {
            auto invader = std::shared_ptr<Invader>(new Invader(invaderAnimations[row], col % 2));
            invaderList->push_back(invader);
        }
    }

    Game game(WINDOW_WIDTH, WINDOW_HEIGHT, windowOffset, projectile, cannon, bomb, invaderList);

    KeyboardController controller;
    Renderer renderer(WINDOW_WIDTH, WINDOW_HEIGHT, bgFile, spriteFile, useHardwareAcceleration);

    game.run(DELAY_TIME, controller, renderer);
}

