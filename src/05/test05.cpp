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
        if (this->person != NULL) {
            delete this->person;
            this->person = NULL;
        }
    }

    int m_Age;    
private:
    Person * person;    
};

void test01() {
    Person p1(10);//自动析构
    Person * p1 = new Person(10);
    p1->showAge();
    delete p1;

    smartPointer sp(new Person(10));//sp开辟到了栈上，自动释放
    sp->showAge();
    
    (*sp).showAge();
}

int main() {
    test01();
    return 0;
}

