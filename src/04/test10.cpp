/**
 * 成员函数做友元函数
*/
#include<iostream>

using namespace std;

class Building;
class goodGay {
public:
    goodGay();
    void visit();
    void visit2();
private:
    Building * building;        
};

class Building {
    //让成员函数 visit作为友元函数
    friend void goodGay::visit();
public:
    Building();
public:
    string m_SittingRoom;//客厅
private:
    string m_BedRoom;//卧室            
};

goodGay::goodGay() {
    building = new Building;
}

void goodGay::visit() {
    cout << "好基友正在访问：" << this->building->m_SittingRoom << endl;
    cout << "好基友正在访问：" << this->building->m_BedRoom << endl;
}

void goodGay::visit2() {
    cout << "好基友正在访问：" << this->building->m_SittingRoom << endl;
}

Building::Building() {
    this->m_SittingRoom = "客厅";
    this->m_BedRoom = "卧室";
}

void test01() {
    goodGay gg;
    gg.visit();
    gg.visit2();
}

int main() {
    test01();
    return 0;
}