/**
 * 赋值运算符重载
*/
#include<iostream>
using namespace std;

class Person {
public:
    Person(int a) {
        this->m_A = a;
    }    

    int m_A;
};

class Person2 {
public:
    Person2(char * name) {
        this->pName = new char[strlen(name) + 1];
        strcpy(this->pName, name);
    }

    //重载 = 赋值运算符
    Person2& operator=(const Person2 & p) {
        if (this->pName != NULL) {
            delete[] this->pName;
            this->pName = NULL;
        }

        this->pName = new char[strlen(p.pName) + 1];
        strcpy(this->pName, p.pName);
        return *this;
    }

    ~Person2() {
        if(this->pName != NULL) {
            delete[] this->pName;
            this->pName = NULL;
        }
    }

    char * pName;    
}

void test01() {
    Person p1(10);
    Person p2(0);

    p2 = p1;//赋值
    cout << "p2的m_A:" p2.m_A << endl;
}

void test02() {
    Person2 p1("狗");
    Person2 p2("猫");

    Person2 p3("");
    p3 = p2 = p1;
    cout << p2.name << endl;
    cout << p3.name << endl;

    
}

int main() {
    test01();
    return 0;
}