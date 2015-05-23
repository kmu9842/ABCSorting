#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

USING_NS_CC;

class HelloWorld : public cocos2d::LayerColor
{
private :
	int stageNum = 1;
	int selectTag[2];
	int selectCount = 0;
	int stringIndex = 26;
	int selectX = 0;
	int alphabatArray[100];

	Label *alphabat[100];
	Size visibleSize = Director::getInstance()->getVisibleSize();
	Vec2 origin = Director::getInstance()->getVisibleOrigin();

	Sprite *castSprite2 = Sprite::create("selectside.png");

public :

    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // a selector callback
	void menuCloseCallback(cocos2d::Ref* pSender);

	void settingString();
	void settingRandom();
	void update(float delta);
    
    // implement the "static create()" method manually
    CREATE_FUNC(HelloWorld);
};

#endif // __HELLOWORLD_SCENE_H__
