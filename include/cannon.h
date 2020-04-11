#ifndef CANNON_H
#define CANNON_H

#include <memory>
#include "sprite.h"

class Cannon : public Sprite {
public:
    Cannon(std::vector<Rect> cannonAnimations
            , int windowWidth
            , int windowHeight
            , std::shared_ptr<Sprite> projectile
            , int mMoveCannonBy);

    void Fire();;
    void MoveLeft();;
    void MoveRight();;
    void Destroy();
    void Reset() override;

    std::shared_ptr<Sprite> mProjectile;

private:
    int mWindowWidth, mWindowHeight;
    int mMoveCannonBy;
    bool mDestroyed;
};


#endif // CANNON_H
