/*
 * lvalue.cpp
 *
 *  Created on: 2017�~7��5��
 *      Author: Raycao
 */

#include "lvalue.h"
#include <iostream>
using namespace std;

//�O�����}�����νd��
int main() {
    int var = 10;

    cout << "�ܼ�var���ȡG" << var
         << endl;
    cout << "�ܼ�var���O�����}�G" << &var
    		//�Q��&�B��l���o�ܼƪ��O�����}
         << endl;

    return 0;
}

