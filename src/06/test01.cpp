/**
* 关系运算符重载
*/
#include<iostream>
#include<string>

using namespace std;

class Person {
public:
    Person(string name, int age) {
        this->m_Name = name;
        this->m_Age = age;
    }
public:
    string m_Name;
    int m_Age;
};

void test01() {
    cout << "test..." << endl;
}

int main() {
    test01();
    return 0;
}