/**
 * 继承中的对象模型
*/
#include<iostream>

using namespace std;

class Base {
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;            
};

class Son : public Base {
public:
    int m_D;    
};

void test01() {
    //子类中 会继承父类的私有成员，只是被编译给隐藏起来，访问不到私有成员
    cout << sizeof(Son) << endl;
}

int main() {
    test01();
}