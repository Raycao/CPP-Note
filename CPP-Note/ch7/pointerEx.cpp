/*
 * pointerEx.cpp
 *
 *  Created on: 2017年7月6日
 *      Author: Raycao
 */

#include "pointerEx.h"
#include <iostream>
using namespace std;

//指標使用範例
int main() {
    int var = 10;

    //宣告指標，並利用&運算子將變數var的位址傳給指標
    int *ptr = &var ;

    cout << "變數var的位址：" << &var
         << endl;
    //指標內存放的值是指向目標的位址
    cout << "指標ptr指向的位址：" << ptr
         << endl;
    //加上星號可以操作指標指向位址的內容
    cout << "取出ptr指向的記憶體位置之值：" << *ptr
             << endl;


    return 0;
}

