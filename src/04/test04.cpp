/**
 * 成员变量和成员函数分开存储
*/
#include<iostream>
using namespace std;

class Person {
public:
    int m_A;//非静态成员变量 属于对象身上
    void func() {} //非静态成员函数 不属于对象身上
    static int m_B;//静态成员变量，不属于对象身上
    static void func2() {} //静态成员函数，不属于对象身上
    double m_C;    
};

void test01() {
    cout << "size of (Person) = " << sizeof(Person) << endl;
    //空类的大小为1 每个实例的对象 都有独一无二的地址 char维护这个地址
}

void test02() {
    Person p1;
    p1.func();

    Person p2;
    p2.func2();
}

int main() {
    test01();
    return 0;
}