/**
* 单例模式
*/
#include<iostream>
using namespace std;

class ChairMan {
    //构造函数 进行私有化
private:
    ChairMan() {
        cout << "创建国家主席" << endl;
    }
};

void test01() {

}

int main() {
    cout << "测试单例" << endl;
    return 0;
}