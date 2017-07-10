/*
 * ptrChar.cpp
 *
 *  Created on: 2017年7月7日
 *      Author: Raycao
 */

#include "ptrChar.h"
#include <iostream>
using namespace std;

//字元指標指定字串內容
int main() {
    char *str = "hello";
    cout << str << endl;

    str = "world";
    cout << str << endl;

    return 0;
}
