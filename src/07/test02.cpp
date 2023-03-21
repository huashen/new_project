/**
 * 虚析构和纯虚析构
*/
#include<iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "动物在说话" << endl;
    }

    //普通析构 是不会调用子类的析构的，所以可能会导致释放不干净
	//利用虚析构来解决这个问题
    virtual ~Animal() {
        cout << "Animal的析构调用" << endl;
    }

    //纯虚析构 ，需要声明 还需要实现 类内声明，类外实现
    virtual ~Animal() = 0;
};

Animal::~Animal {
    //纯虚析构函数实现
    cout << "Animal的纯虚析构调用" << endl;
}

class Cat : public Animal {
public:
    Cat(const char *name) {
        this->m_Name = new char[strlen(name) + 1];
        strcpy(this->m_Name, name);
    }

    virtual void speak() {
        cout << "小猫在说话" << endl;
    }

    ~Cat() {
        cout << "Cat的析构调用" << endl;
        if (this->m_Name != NULL) {
            delete[] this->m_Name;
            this->m_Name = NULL;
        }
    }

    char * m_Name;     
};

void test01() {
    Animal * animal = new Cat("TOM");
    animal->speak();

    delete animal;
}

int main() {
    test01();
    return 0;
}