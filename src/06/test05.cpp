/**
 * 继承方式
*/
#include<iostream>

using namespace std;

class Base1 {
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;            
};

class Son1 : public Base1 {
public:
    void func() {
        //cout << m_C << endl; //私有属性 不可继承
        cout << m_A << endl;
        cout << m_B << endl;
    }    
};

void myFunc() {
    Son1 s1;
    s1.m_A;
    //s1.m_B;
}

//保护继承 ---------神的分割线-------------
class Base2 {
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;        
};


class Son2 : protected Base2 {
public:
    void func() {
        //cout << m_C << endl;
        cout << m_A << endl;
        cout << m_B << endl;
    }
};

void myFunc2() {
    Son2 s;
    //s.m_A; 不能访问
}

