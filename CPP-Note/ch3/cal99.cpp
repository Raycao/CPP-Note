/*
 * cal99.cpp
 *
 *  Created on: 2017年7月4日
 *      Author: Raycao
 */

#include "cal99.h"
#include <iostream>
using namespace std;

//利用for做99乘法表
int main() {
    for (int i = 2, j = 1;
         j < 10;
         (i==9)?(i=(++j/j)+1):(i++)) {

        int tmp = i * j;
        cout << i << "*" << j;
        cout << ((tmp>=10)? "=": "= ") ;
        if(i == 9)
            cout << i*j << endl;
        else
            cout << i*j << " ";
    }

    return 0;
}
