//
//  FruitSprite.cpp
//  MyFruit
//
//  Created by student on 16/2/27.
//
//

#include "FruitSprite.h"

bool FruitSprite::init()
{
    if (!Sprite::init())
    {
        return false;
    }
    
    this->num = 0;
    return true;
}

FruitSprite* FruitSprite::createFruit(int type, __String name)
{
    FruitSprite* ret = FruitSprite::create();
    ret->initWithSpriteFrameName(name.getCString());
    ret->setNum(type);
    return ret;
}

