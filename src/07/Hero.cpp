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

    if(isCirt) {
        damge = damge * 2;
        cout << "英雄武器触发了暴击效果，怪物收到了双倍的伤害，伤害值：" << damge << endl;
    }

    if(isHold) {
        cout << "英雄武器触发了定身效果，怪物停止攻击一回合" << endl;
    }

    if (addHp > 0) {
        cout << "英雄的武器触发了吸血效果，英雄增加的血量为 " << addHp << endl;
    }

    //设置怪物定身
    monster->m_Hold = isHold;

    int trueDamage = (damge - monster->m_Def) > 0 ? damge - monster->m_Def : 1;
    monster->m_Hp -= trueDamage;
    this->m_Hp += addHp;
    cout << "英雄" << this->m_Name << "攻击了敌人" << monster->m_Name << "造成了伤害" << trueDamage << endl;
}