#include "DragonSword.h"

DragonSword::DragonSword() {
    this->m_BaseDamage = 20;
    this->m_WeaponName = "屠龙宝刀";
    this->suckRate = 20;
    this->holdRate = 30;
    this->critRate = 35;
}

int DragonSword::getBaseDamage() {
    return this->m_BaseDamage;
}

int DragonSword::getSuckBlood() {
    if (isTrigger(suckRate)) {
        return this->m_BaseDamage * 0.5;
    }
}