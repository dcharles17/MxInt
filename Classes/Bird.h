#ifndef __BIRD_H__
#define __BIRD_H__

#include "cocos2d.h"

#define BIRD_COLLISION_BITMASK 0x000001
#define BIRD_FALLING_SPEED 0.0025



class Bird
{
public:
	Bird(cocos2d::Layer *layer);

	void Fall();
	void Fly() { isFalling = false; };
	void StopFlying() { isFalling = true; }

	

private:
	cocos2d::Size visibleSize;
	cocos2d::Vec2 origin;

	cocos2d::Sprite *flappyBird;

	bool isFalling;

   
};

#endif // __BIRD_H__
