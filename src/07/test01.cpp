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

void doSpeak(Animal & animal) {
    animal.speak();
}

void test01() {
    Cat cat;
    doSpeak(cat);
}

void test02()
{
    //cout << sizeof(Animal) << endl;
    //父类指针指向子类对象 多态
    Animal * animal = new Cat;

    animal->speak();
    // *(int*)*(int*)animal 函数地址
    ((void(*)()) (*(int*)*(int*)animal))();

    //  *((int*)*(int*)animal+1)猫吃鱼的地址

    ((void(*)()) (*((int*)*(int*)animal + 1)))();
}

int main() {
    test01();
    test02();
    return 0;
}