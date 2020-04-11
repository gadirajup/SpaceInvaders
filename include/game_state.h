#ifndef GAMESTATE_H
#define GAMESTATE_H

enum class GameState {
    Started, Running, Won, Lost, ExitCalled
};

class GameStateManager {
    friend class Game;

public:
    void ExitGame() {
        mCurrentState = GameState::ExitCalled;
    };

private:
    GameState mCurrentState;
    bool mExitNow = false;

    void SetState(const GameState state) {
        mCurrentState = state;
    };

    const GameState GetState() {
        return mCurrentState;
    }

    bool ShouldExitNow(){
        return mExitNow;
    }
};

#endif // GAMESTATE_H
