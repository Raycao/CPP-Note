/*
 * ref.cpp
 *
 *  Created on: 2017年7月7日
 *      Author: Raycao
 */

#include "ref.h"
#include <iostream>
using namespace std;

//參考實例
int main() {
    int var = 10;
    int &ref = var; //宣告參考

    cout << "var: " << var
         << endl;
    cout << "ref: " << ref
         << endl;

    ref = 20; //對參考做的操作，也會做用到參考物件上

    cout << "var: " << var
         << endl;
    cout << "ref: " << ref
         << endl;

    return 0;
}
