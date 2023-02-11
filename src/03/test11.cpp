#include<iostream>
using namespace std;

/**
 *
 */
class Person {
public:
    Person() {
        cout << "默认构造调用" << endl;    
    }    

    Person(int a) {
        cout << "有参构造调用" << endl;
    }

    ~Person() {
        cout << "析构函数调用" << endl;
    }
};

void test01() {
    Person *p2 = new Person;
    //所有new出来的对象 都会返回该类型的指针
    //malloc 返回 void* 还要强转
    //malloc会调用构造吗？ 不会  new会调用构造
    // new 运算符  malloc 函数
    //释放 堆区空间
    // delete也是运算符 配合 new用  malloc 配合 free用
    delete p2;  
}

void test02() {
    void *p = new Person(10);
    //无法释放p
    delete p;
}

int main() {
    test01();
    return 0;
}