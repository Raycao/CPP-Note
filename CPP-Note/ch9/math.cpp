/*
 * math.cpp
 *
 *  Created on: 2017年7月7日
 *      Author: Raycao
 */

#include "math.h"

//載入標頭檔，並實作函式

int pow2(int num) {
    return num*num;
}

int pow(int n, int p) {
    int r = 1;

    for(int i = 0; i < p; i++)
        r *= n;

    return r;
}
