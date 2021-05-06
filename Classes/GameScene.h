#ifndef __GAME_SCENE_H__
#define __GAME_SCENE_H__

#include "cocos2d.h"
#include "Pipe.h"
#include "Bird.h"

#define PIPE_SPAWN_FREQUENCY 0.005	
#define OBSTACLE_COLLISION_BITMASK 0x000002
#define TRANSITION_TIME 0.5
#define POINT_COLLISION_BITMASK 0x000003
#define SCORE_FONT_SIZE 0.1
#define BIRD_FLY_DURATION 0.25





class GameScene : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // implement the "static create()" method manually
    CREATE_FUNC(GameScene);

 

private:
    void SetPhysicsWorld(cocos2d::PhysicsWorld* world) { sceneWorld = world; };

    void SpawnPipe(float dt);

    bool onContactBegin(cocos2d::PhysicsContact & contact);

    bool onTouchBegan(cocos2d::Touch *touh, cocos2d::Event *event);

    void StopFlying(float dt);
    void update(float dt);

    cocos2d::PhysicsWorld * sceneWorld;

    Pipe pipe;

    Bird *bird;

    unsigned int score;

    cocos2d::Label *scoreLabel; 

    
};

#endif // __GAME_SCENE_H__
