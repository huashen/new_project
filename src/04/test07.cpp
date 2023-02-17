/**
 * const修饰成员函数
*/
#include<iostream>
using namespace std;

class Person {
public:
    Person() {
        this->m_A = 0;
        this->m_B = 0;
    }

    void showInfo() const {
        this->m_B = 1000;
        cout << "m_A= " << this->m_A << endl;
        cout << "m_B= " << this->m_B << endl;
    }

    void show2() {
        m_A = 100;
    }

    int m_A;
    mutable int m_B;    
};

void test01() {
    Person p1;
    p1.showInfo();

    //常对象 不允许修改属性
    const Person p2;
    p2.showInfo();
    //p2.show2(); // 报错
    //常对象 不可以调用普通成员函数
    //常对象 可以调用常函数
}

int main() {
    test01();
}