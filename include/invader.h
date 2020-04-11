#ifndef INVADER_H
#define INVADER_H

#include <iostream>
#include <memory>
#include "sprite.h"

class Invader : public Sprite {
public:
    Invader(std::vector<Rect> animations, int startAnimationIndex);

    void Animate();
    void Destroy();
    bool Destroyed();
    bool CanMoveRight(int bound);
    void MoveRight();;
    bool CanMoveLeft(int bound);
    void MoveLeft();
    void MoveDown();
    bool CanMoveDown(int bound);
    void Reset() override;

private:
    bool mDestroyed = false;
    int mStartAnimationIndex;
};

#endif // INVADER_H
