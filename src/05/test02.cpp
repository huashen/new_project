#include<iostream>

using namespace std;

class Person {
public:
    Person() {}    
    Person(int a, int b) :m_A(a), m_B(b) {}

    int m_A;
    int m_B;
};

Person operator+ (Person &p1, Person &p2) {
    Person tmp;
    tmp.m_A = p1.m_A + p2.m_A;
    tmp.m_B = p1.m_B + p2.m_B;
    return tmp;
}

Person operator+ (Person &p1, int a) {
    Person tmp;
    tmp.m_A = p1.m_A + a;
    tmp.m_B = p1.m_B + a;
    return tmp;
}

void test01() {
    Person p1(10, 10);
    Person p2(10, 10);

    Person p3 = p1 + p2;
    Person p4 = p1 + 10;
    cout << "p3的m_A: " << p3.m_A << " m_B:" << p3.m_B << endl;
}

int main() {
    test01();
    return 0;
}