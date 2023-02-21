#include<iostream>
#include "MyArray.h";

void test01() {
    //堆区创建数组
    MyArray * array = new MyArray[30];

    MyArray * array2 = new MyArray(*array);//new方式指定调用拷贝构造
    MyArray array3 = *array;

    delete array;

    //尾插法测试
    for (int i = 0; i < 10; i++) {
        array2->push_Back(i);
    }
    
}

int main() {
    test01();
    return 0;
}