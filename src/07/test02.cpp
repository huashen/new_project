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

int main() {
    test01();
    return 0;
}