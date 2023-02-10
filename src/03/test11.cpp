#include<iostream>
using namespace std;

class Person() {
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
    delete p2;  
}

void test02() {
    void *p = new Person(10);
    //无法释放p
    delete p;
}