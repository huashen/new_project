#include<iostream>
#include<string>
using namespace std;

class Weapon {
public:
    //获取基础伤害
    virtual int getBaseDamage() = 0;

    virtual int getSuckBlood() = 0;

    virtual bool getHold() = 0;

    virtual bool getCrit() = 0;

    string m_WeaponName;//武器名称
    int m_BaseDamage;//基础伤害
};