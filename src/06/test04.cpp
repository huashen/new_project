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
public:
    void content() {
        cout << "新闻播放" << endl;
    }
};

class YULE extentds:public BasePage {
public:
    void content() {
        cout << "娱乐信息" << endl;
    }    
};

class Game extentds: public BasePage {
public:
    void content() {
        cout << "KPL" << endl;
    }    
};

void test02() {
    cout << "新闻页内容" << endl;
    News news;
    news.header();
    news.footer();
    news.left();
    news.content();

    cout << "娱乐业" << endl;
    YULE yl;
    yl.header();
    yl.footer();
    yl.left();
    yl.content();

    cout << "游戏页内容" << endl;
    Game game;
    game.header();
    game.footer();
    game.left();
    game.content();
}

int main() {
    test02();
    return 0;
}