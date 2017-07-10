/*
 * ptrptr.cpp
 *
 *  Created on: 2017年7月7日
 *      Author: Raycao
 */

#include "ptrptr.h"
#include <iostream>
using namespace std;

//雙重指標實例
int main() {
    int p = 10;
    int *ptr1 = &p;
    int **ptr2 = &ptr1; //再用一個指標記ptr1指標的位址

    cout << "p的值：" << p << endl;
    cout << "p的記憶體位置: " << &p << endl;

    cout << endl;

    cout << "*ptr1 = " << *ptr1 << endl;
    cout << "ptr1 = " << ptr1 << endl;
    cout << "ptr1的記憶體位置: " << &ptr1 << endl;

    cout << endl;

    cout << "**ptr2 = " << **ptr2 << endl;
    cout << "*ptr2 = " << *ptr2 << endl;
    cout << "ptr2 = " << ptr2 << endl;

    cout << endl;

    cout << "整理(誰儲存了誰？)：" << endl;
    cout << "&p = " << &p << "\t\t" << "ptr1 = " << ptr1 << endl;
    cout << "&ptr1 = " << &ptr1 << "\t"
         << "ptr2 = " << ptr2
         << endl;

    return 0;
}
