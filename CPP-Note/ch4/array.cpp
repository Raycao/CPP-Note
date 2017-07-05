/*
 * array.cpp
 *
 *  Created on: 2017年7月4日
 *      Author: Raycao
 */

#include "array.h"
#include <iostream>
using namespace std;

//陣列範例
int main() {
    const int length = 10;
    int iarr[length] = {0};

    for(int i = 0; i < length; i++)
    	//透過index來指定哪個元素
        cout << iarr[i] << " ";
    cout << endl;

    for(int i = 0; i < length; i++)
        iarr[i] = i;

    for(int i = 0; i < length; i++)
        cout << iarr[i] << " ";
    cout << endl;

    return 0;
}
