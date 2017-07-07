/*
 * lvalue.cpp
 *
 *  Created on: 2017年7月5日
 *      Author: Raycao
 */

#include "lvalue.h"
#include <iostream>
using namespace std;

//記憶體位址的取用範例
int main() {
    int var = 10;

    cout << "變數var的值：" << var
         << endl;
    cout << "變數var的記憶體位址：" << &var
    		//利用&運算子取得變數的記憶體位址
         << endl;

    return 0;
}

