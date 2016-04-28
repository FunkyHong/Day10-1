//
//  FruitSprite.hpp
//  MyFruit
//
//  Created by student on 16/2/27.
//
//

#ifndef FruitSprite_hpp
#define FruitSprite_hpp

#include <iostream>
using namespace std;
#include "cocos2d.h"
using namespace cocos2d;

class FruitSprite : public Sprite
{
public:
    CREATE_FUNC(FruitSprite);
    virtual bool init();
    CC_SYNTHESIZE(int, num, Num);
    static FruitSprite* createFruit(int type, __String name);
    
private:
    int score;

    
};

#endif /* FruitSprite_hpp */
