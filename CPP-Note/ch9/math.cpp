/*
 * math.cpp
 *
 *  Created on: 2017�~7��7��
 *      Author: Raycao
 */

#include "math.h"

//���J���Y�ɡA�ù�@�禡

int pow2(int num) {
    return num*num;
}

int pow(int n, int p) {
    int r = 1;

    for(int i = 0; i < p; i++)
        r *= n;

    return r;
}
