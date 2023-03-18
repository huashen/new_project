/**
* 静态联编和动态联编
*/
#include<iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "动物在说话" << endl;
    }

    virtual void eat() {
        cout << "动物在吃饭" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() {
        cout << "小猫在说话" << endl;
    }

    virtual void eat() {
        cout << "小猫在吃鱼" << endl;
    }
};

void test01() {
    Cat cat;
}

int main() {
    test01();
    return 0;
}