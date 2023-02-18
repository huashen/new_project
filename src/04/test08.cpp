/**
 * 全局函数做友元；函数
*/
#include<iostream>
using namespace std;

class Building {
    friend void goodGay(Building *building);
public:
    Building() {
      this->m_SettingRoom = "客厅";
      this->m_BedRoom = "卧室";
    }
public:
    string m_SettingRoom;//客厅
private:
    string m_BedRoom;//卧室            
};

void goodGay(Building *building) {
    cout << "好基友正在访问" << building->m_SettingRoom <<endl;
    cout << "好基友正在访问" << building->m_BedRoom <<endl;
}

void test01() {
    Building *building = new Building;
    goodGay(building);
}

int main() {
    test01();
    return 0;
}