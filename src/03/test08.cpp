#include<iostream>
using namespace std;

/**
 * 初始化列表使用
*/
class Person {
public:
    Person(int a, int b, int c) {
        m_A = a;
        m_B = b;
        m_C = c;
    }
    Person():m_A(10), m_B(20), m_C(30) {}

    int m_A;
    int m_B;
    int m_C;    
};

void test01() {
    Person p1(10, 20, 30);
    cout << "p1的m_A:" << p1.m_A << endl;

    Person p2;
    cout << "p2的m_A:" << p2.m_A << endl;
}

int main() {
    test01();
}