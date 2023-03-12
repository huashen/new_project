/**
* 继承中静态成员处理
*/
#include<iostream>
using namespace std;

class Base {
public:
    static void func() {
        cout << "base fun()" << endl;
    }

    static void func(int a) {
        cout << "base fun(int)" << endl;
    }

    static int m_A;
};

int Base::m_A = 10;

class Son : public Base {
public:
        static void func() {
            cout << "son fun()" << endl;
        }

        static int m_A;
};

int Son::m_A = 20;

//静态成员属性 子类可以继承下来
void test01() {
    cout << Son::m_A << endl;
    cout << Base::m_A << endl;

    Son::func();
    Son::Base::func();
}

int main() {
    test01();
    return 0;
}