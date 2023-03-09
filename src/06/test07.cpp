/**
 * 继承中的构造和析构函数
*/
#include<iostream>

using namespace std;

class Base {
public:
    Base() {
        m_A = 10;
        cout << "Base默认构造函数调用" << endl;
    }

    ~Base() {
        cout << "Base的析构函数调用" << endl;
    }

    int m_A;
};

class Son : public Base {
    Son() {
        cout << "Son默认构造函数调用" << endl;
    }

    ~Son() {
        cout << "Son析构函数调用" << endl;
    }
};

void test01() {
    Son s1;
}

int main() {
    return 0;
}