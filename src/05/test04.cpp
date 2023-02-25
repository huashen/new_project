/**
 * 前置后置的递增递减运算符重载
 */
#include <iostream>

using namespace std;

class MyInteger {
    friend ostream& operator<<(ostream& cout, MyInteger & myInt);
public:
    MyInteger() {
        m_Num = 0;
    }

    //前置++重载
    MyInteger& operator++() {
        this->m_Num++;
        return *this;
    }

    int m_Num;
};

ostream& operator<<(ostream& cout, MyInteger & myInt) {
    cout << myInt.m_Num;
    return cout;
}

void test01() {
    MyInteger myInt;

    //前置++
    cout << ++(++myInt) << endl;
}

int main() {
    test01();
    return 0;
}