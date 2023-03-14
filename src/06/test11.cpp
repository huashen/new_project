/**
 * 菱形继承
*/
#include<iostream>
using namespace std;

class Animal {
public:
    int m_Age;    
};

class Sheep: virtual public Animal {

};

class Tuo: virtual public Animal {

};

class SheepTuo:public Sheep , public Tuo {

};

/**
 * 菱形继承的解决方案 利用虚继承
 * 操作的是共享的一份数据 
 */
void test01() {
    SheepTuo st;
    st.Sheep::m_Age = 10;
    st.Tuo::m_Age = 20;

    cout << st.Sheep::m_Age << endl;
    cout << st.Tuo::m_Age << endl;
    cout << st.m_Age << endl;//可以直接访问，原因已经没有二义性的可能了，只有一份m_Age
}

int main() {
    test01();
    return 0;
}