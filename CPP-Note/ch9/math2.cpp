/*
 * math2.cpp
 *
 *  Created on: 2017�~7��7��
 *      Author: Raycao
 */

#include "math2.h"

//�]�����Y�ɦ��w�qinline�A�O�o�o��]�n�ɤW
inline int pow2(int num) {
    return num*num;
}

int pow(int n, int p) {
    int r = 1;

    for(int i = 0; i < p; i++)
        r *= n;

    return r;
}
