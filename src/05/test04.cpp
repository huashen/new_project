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

    int m_Num;
};

int main() {

}