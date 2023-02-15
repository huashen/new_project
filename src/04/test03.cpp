#include<iostream>
using namespace std;

class Printer {
private:
    Printer() {
        m_Count = 0;
    }

    Printer(const Printer& p) {

    }
public:
    static Printer* getInstance() {
        return singlePrinter;
    }

    void printText(string text) {
        cout << text << endl;
        m_Count++;
        cout << "打印机使用次数为" << m_Count << endl;
    }
private:
    static Printer* singlePrinter;
    int m_Count;
};
Printer* Printer::singlePrinter = new Printer;

void test01() {
    Printer* printer = Printer::getInstance();
    printer->printText("1");
    printer->printText("2");
    printer->printText("3");
    printer->printText("4");
    printer->printText("5");
}

int main() {
    test01();
    return 0;
}