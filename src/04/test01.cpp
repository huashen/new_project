/**
 * 静态成员变量和静态成员函数
 */
#include<iostream>
using namespace std;

class Person {
public:
    Person() {

    }

    static int m_Age;//加入static 就是静态成员变量 会共享数据
    int m_A;

    static void func() {
        //m_A = 10; //错误
        m_Age = 100;
        cout << "func调用"<< endl;
    }

    void myFunc() {
        m_A = 10;
        m_Age = 100;
    }
private:
    static int m_other;
    static void func2() {
        cout << "func2调用" <<endl;
    }
};

int Person::m_Age = 0;//类外初始化实现
int Person::m_other = 10;

void test01() {
    //1.通过对象访问属性
    Person p1;
    p1.m_Age = 10;

    Person p2;
    p2.m_Age = 20;

    cout << "p1=" << p1.m_Age << endl;
    cout << "p2=" << p2.m_Age << endl;

    //2.通过类名访问属性
    cout << "通过类名访问Age" << Person::m_Age << endl;
    //cout << "other" << Person::m_other << endl; //私有权限在类外无法访问

    //静态成员函数调用
    p1.func();
    p2.func();
    Person::func();

    //Person::func2(); //调用失败
}


int main() {
    test01();
    return 0;
}

