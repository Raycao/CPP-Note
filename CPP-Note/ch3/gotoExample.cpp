/*
 * gotoExample.cpp
 *
 *  Created on: 2017年7月4日
 *      Author: Raycao
 */

#include "gotoExample.h"
#include <iostream>
using namespace std;

//goto範例
//建議撰寫程式還是不要用goto，以免造成版面的混亂
int main() {
    int input = 0;

begin:

    cout << "輸入一數：";
    cin >> input;

    if(input == 0)
        goto error;

    cout << "100 / " << input
         << " = " << static_cast<double>(100) / input
         << endl;

    return 0;

error:
    cout << "除數不可為0" << endl;
    goto begin;
}
