/*
 * ptrLocation.cpp
 *
 *  Created on: 2017�~7��7��
 *      Author: Raycao
 */

#include "ptrLocation.h"
#include <iostream>
using namespace std;

//��M���лP���V�ܼƤ��������P�A��}���Ҥ��P
int main() {
    int p = 10;
    int *ptr = &p;

    cout << "p���ȡG" << p
         << endl;
    cout << "p���O�����m: " << &p
         << endl;
    cout << "*ptr�ѷӪ���: " << *ptr
         << endl;

    cout << "ptr�x�s����}��: " << ptr
         << endl;
    cout << "ptr���O�����m: " << &ptr
         << endl;

    return 0;
}

