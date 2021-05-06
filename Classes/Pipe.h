#ifndef __PIPE_H__
#define __PIPE_H__

#include "cocos2d.h"

#define UPPER_SCREEN_PIPE_THRESHOLD 0.65
#define LOWER_SCREEN_PIPE_THRESHOLD 0.35
#define OBSTACLE_COLLISION_BITMASK 0x000002
#define PIPE_MOVEMENT_SPEED 0.01
#define PIPE_GAP 10
#define POINT_COLLISION_BITMASK 0x000003



class Pipe
{
public:
	Pipe();

	void SpawnPipe(cocos2d::Layer* layer);

private:
	cocos2d::Size visibleSize;
	cocos2d::Vec2 origin;
   
};

#endif // __PIPE_H__
