#include "Hero.h"

Hero::Hero {
    this->m_Hp = 500;
    this->m_Atk = 50;
    this->m_Def = 50;
    this->m_Name = "刘法师";
    this->weapon = NULL;
}

//装备武器
void Hero::EquipWeapon(Weapon *weapon) {
    this->weapon = weapon;
    cout << "英雄:" << this->m_Name << "装备了武器" << this->weapon->m_WeaponName << endl;
}

void Hero::Attack(Monster *monster) {
    int damage = 0;
    int addHp = 0;

    if(this->weapon == NULL) {
        damage = this->m_Atk;
    } else {
        //基础伤害
        damage = this->m_Atk + this->weapon->getBaseDamage();
        addHp = this->weapon->getSuckBlood();
        isHold = this->weapon->getHold();
        isCrit = this->weapon->getCrit();
    }

    //todo
}