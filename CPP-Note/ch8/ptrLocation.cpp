/*
 * ptrLocation.cpp
 *
 *  Created on: 2017年7月7日
 *      Author: Raycao
 */

#include "ptrLocation.h"
#include <iostream>
using namespace std;

//釐清指標與指向變數之間的不同，位址有所不同
int main() {
    int p = 10;
    int *ptr = &p;

    cout << "p的值：" << p
         << endl;
    cout << "p的記憶體位置: " << &p
         << endl;
    cout << "*ptr參照的值: " << *ptr
         << endl;

    cout << "ptr儲存的位址值: " << ptr
         << endl;
    cout << "ptr的記憶體位置: " << &ptr
         << endl;

    return 0;
}

