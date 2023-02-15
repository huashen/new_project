/**
* 单例模式-主席案例
*/
#include<iostream>
using namespace std;

class ChairMan {
    //构造函数 进行私有化
private:
    ChairMan() {
        cout << "创建国家主席" << endl;
    }

    //拷贝构造私有化
    ChairMan(const ChairMan &c) {}
public:
    static ChairMan* getInstance() {
        return singleMan;
    }
private:
    static ChairMan* singleMan;    
};

ChairMan* chairMan::singleMan = new ChairMan;

void test01() {
    ChairMan *cm1 = ChairMan::getInstance();
    ChairMan *cm2 = ChairMan::getInstance();
    if (cm1 == cm2) {
        cout << "cm1与cm2相同" << endl;
    } else {
        cout << "cm1与cm2不相同" << endl;
    }

    ChairMan *cm3 = new ChairMan(*cm2);
    if (cm3 == cm2) {
        cout << "cm3与cm2相同" << endl;
    } else {
        cout << "cm3与cm2不相同" << endl;
    }
}

int main() {
    cout << "测试单例" << endl;
    test01();
    return 0;
}