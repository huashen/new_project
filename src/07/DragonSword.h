#include<iostream>
#include "Weapon.h"
#include<string>

using namespace std;

class DragonSword::public Weapon {
public:
    DragonSword();

    virtual int getBaseDamage();

    virtual int getSuckBlood();

    virtual bool getHold();

    virtual bool getCrit();

    int suckRate;
    int holdRate;
    int critRate;

    bool isTrigger(int rate);
};