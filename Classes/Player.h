#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "cocos2d.h"
#include "Magic.h"
class Player :public cocos2d::Sprite
{
protected:
	
	Player();
	bool init() override;
	void update(float dt) override;

	int indexCheck;

public:

	cocos2d::Vec2 LRMagicPosition;
	cocos2d::Vec2 UDMagicPosition;

	bool magicFlag;
	bool rightFlag;
	bool upFlag;
	bool downFlag;
	bool stopL;
	bool stopR;
	void jump();
	void playAnimation(int index);


	Magic* magic;

	Magic* sideMirrorEffect();
	Magic* upDownMirrorEffect();


	CREATE_FUNC(Player);

};

#endif //__PLAYER_H__