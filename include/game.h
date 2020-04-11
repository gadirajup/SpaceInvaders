#ifndef GAME_H
#define GAME_H

#include <string>
#include <chrono>
#include <SDL2/SDL_types.h>
#include "game_state.h"
#include "controller.h"
#include "cannon.h"
#include "renderer.h"
#include "invader.h"
#include "invader_list.h"
#include "level.h"

class Game {
public:
    Game(int windowWidth
            , int windowHeight
            , int windowOffset
            , std::shared_ptr<Sprite> projectile
            , std::shared_ptr<Cannon> cannon
            , std::shared_ptr<Sprite> bomb
            , std::shared_ptr<InvaderList> invaderList);

    void run(int delayBetweenFramesMs, const Controller &, const Renderer &);

private:
    std::shared_ptr<GameStateManager> mGameStateManager;

    std::vector<std::shared_ptr<Sprite>> mSpriteList;
    std::shared_ptr<Cannon> mCannon;
    std::shared_ptr<Sprite> mProjectile;
    std::shared_ptr<InvaderList> mInvaderList;
    std::shared_ptr<Sprite> mBomb;

    int mScore;
    int mWindowWidth, mWindowHeight, mWindowOffset;

    Level level;

    void Update(int referenceTicks);

    void Start();
};

#endif // GAME_H
