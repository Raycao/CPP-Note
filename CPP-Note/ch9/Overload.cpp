/*
 * Overload.cpp
 *
 *  Created on: 2017年7月10日
 *      Author: Raycao
 */

#include "Overload.h"
#include <iostream>
using namespace std;

//可以看到這邊定義兩個同樣名字的函式
//只有引數部分不盡相同
void showpara(int);
void showpara(int, int);

//重載函式的應用
int main() {

	//使用兩個重載函式，可以發現會自己去對應，去呼叫所需要的版本
    showpara(10);
    showpara(20, 30);

    return 0;
}

void showpara(int x) {
    cout << "引數：" << x
         << endl;
}

void showpara(int x, int y) {
    cout << "引數：" << x
         << "\t" << y
         << endl;
}

