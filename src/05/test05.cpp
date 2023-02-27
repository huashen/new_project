/**
 * 指针运算符重载
*/
#include<iostream>

using namespace std;

class Person {
public:
    Person(int age) {
        this->m_Age = age;
    }

    void showAge() {
        cout << "年龄为：" << this->m_Age << endl;
    }

    ~Person() {
        cout << "Person的析构调用" << endl;
    }

    Person * operator->() {
        return this->person;
    }

    Person& operator*() {
        return *this->person;
    }

    ~smartPointer() {
        cout << "智能指针析构了" << endl;
    }

    int m_Age;    
private:
    Person * person;    
};

void test01() {
    Person p1(10);//自动析构
}

int main() {
    test01();
    return 0;
}

