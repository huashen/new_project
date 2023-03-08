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


//私有继承
class Base3 {
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;        
};

class Son3 : private Base3 {
public:
    void func() {
        // cout << m_C << endl;//基类中私有的属性 不可继承
        cout << m_A << endl;//基类中公有的属性 可继承，还是private
        cout << m_B << endl;//基类中保护的属性 可继承，还是private
    }    
};

class GrandSon3 : public Son3 {
public:
    void myFunc() {
        //cout << m_A << endl; //孙子类中 访问不到 m_A，因为在Son3中m_A已经是私有属性了
    }    
};

int main() {
    return 0;
}

