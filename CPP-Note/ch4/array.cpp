/*
 * array.cpp
 *
 *  Created on: 2017�~7��4��
 *      Author: Raycao
 */

#include "array.h"
#include <iostream>
using namespace std;

//�}�C�d��
int main() {
    const int length = 10;
    int iarr[length] = {0};

    for(int i = 0; i < length; i++)
    	//�z�Lindex�ӫ��w���Ӥ���
        cout << iarr[i] << " ";
    cout << endl;

    for(int i = 0; i < length; i++)
        iarr[i] = i;

    for(int i = 0; i < length; i++)
        cout << iarr[i] << " ";
    cout << endl;

    return 0;
}
