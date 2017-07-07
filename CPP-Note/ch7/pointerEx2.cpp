/*
 * pointerEx2.cpp
 *
 *  Created on: 2017年7月6日
 *      Author: Raycao
 */

#include "pointerEx2.h"
#include <iostream>
using namespace std;

//將值指定給指標所指向的記憶體位址
int main() {
    int var = 10;
    int *ptr = &var ;

    cout << "var = " << var
         << endl;
    cout << "*ptr = " << *ptr
         << endl;

    *ptr = 20;  //將新的值指向給指標所指向的記憶體位址

    //可以發現var內的資料也會跟著改變
    cout << "var = " << var
         << endl;
    cout << "*ptr = " << *ptr
         << endl;

    return 0;
}

