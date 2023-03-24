#include<iostream>
#include "Weapon.h"
#include<string>
#include "Monster.h"
using namespace std;

class Monster;

class Hero {
public:
    Hero();

    string m_Name; //人名

    int m_Atk;

    int m_Def;

    int m_Help;

    Weapon *weapon;

    void EquipWeapon(Weapon *weapon);

    void Attack(Monster *monster);
};