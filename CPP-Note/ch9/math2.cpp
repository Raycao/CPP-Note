/*
 * math2.cpp
 *
 *  Created on: 2017年7月7日
 *      Author: Raycao
 */

#include "math2.h"

//因為表頭檔有定義inline，記得這邊也要補上
inline int pow2(int num) {
    return num*num;
}

int pow(int n, int p) {
    int r = 1;

    for(int i = 0; i < p; i++)
        r *= n;

    return r;
}
