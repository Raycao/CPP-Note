/*
 * ptrptr.cpp
 *
 *  Created on: 2017�~7��7��
 *      Author: Raycao
 */

#include "ptrptr.h"
#include <iostream>
using namespace std;

//�������й��
int main() {
    int p = 10;
    int *ptr1 = &p;
    int **ptr2 = &ptr1; //�A�Τ@�ӫ��аOptr1���Ъ���}

    cout << "p���ȡG" << p << endl;
    cout << "p���O�����m: " << &p << endl;

    cout << endl;

    cout << "*ptr1 = " << *ptr1 << endl;
    cout << "ptr1 = " << ptr1 << endl;
    cout << "ptr1���O�����m: " << &ptr1 << endl;

    cout << endl;

    cout << "**ptr2 = " << **ptr2 << endl;
    cout << "*ptr2 = " << *ptr2 << endl;
    cout << "ptr2 = " << ptr2 << endl;

    cout << endl;

    cout << "��z(���x�s�F�֡H)�G" << endl;
    cout << "&p = " << &p << "\t\t" << "ptr1 = " << ptr1 << endl;
    cout << "&ptr1 = " << &ptr1 << "\t"
         << "ptr2 = " << ptr2
         << endl;

    return 0;
}
