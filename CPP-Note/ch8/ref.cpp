/*
 * ref.cpp
 *
 *  Created on: 2017�~7��7��
 *      Author: Raycao
 */

#include "ref.h"
#include <iostream>
using namespace std;

//�Ѧҹ��
int main() {
    int var = 10;
    int &ref = var; //�ŧi�Ѧ�

    cout << "var: " << var
         << endl;
    cout << "ref: " << ref
         << endl;

    ref = 20; //��ѦҰ����ާ@�A�]�|���Ψ�ѦҪ���W

    cout << "var: " << var
         << endl;
    cout << "ref: " << ref
         << endl;

    return 0;
}
