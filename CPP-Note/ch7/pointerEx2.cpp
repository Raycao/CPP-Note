/*
 * pointerEx2.cpp
 *
 *  Created on: 2017�~7��6��
 *      Author: Raycao
 */

#include "pointerEx2.h"
#include <iostream>
using namespace std;

//�N�ȫ��w�����Щҫ��V���O�����}
int main() {
    int var = 10;
    int *ptr = &var ;

    cout << "var = " << var
         << endl;
    cout << "*ptr = " << *ptr
         << endl;

    *ptr = 20;  //�N�s���ȫ��V�����Щҫ��V���O�����}

    //�i�H�o�{var������Ƥ]�|��ۧ���
    cout << "var = " << var
         << endl;
    cout << "*ptr = " << *ptr
         << endl;

    return 0;
}

