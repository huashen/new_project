/**
 * 继承的引出
*/
#include<iostream>
using namespace std;

class BasePage {
public:
    void header() {
        cout << "公共头部" << endl;
    }

    void footer() {
        cout << "公共底部" << endl;
    }

    void left() {
        cout << "左侧列表" << endl;
    }    
};

class News :public BasePage //继承 News类继承于 BasePage类
{

};

int main() {
    test02();
    return 0;
}