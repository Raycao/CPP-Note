/*
 * constPTR.cpp
 *
 *  Created on: 2017�~7��7��
 *      Author: Raycao
 */

#include "constPTR.h"
#include <iostream>
using namespace std;

//�n���ŧi�w�q�����
void foo(const int*);

//��������Ъ��`�ƹ��
int main() {
    int var = 10;
    const int var2 = 30;
    const int *ptt = &var2; //const���ܼƭn��const������

    cout << "const����" << *ptt << endl; //�p���~�i�H���Q��*���μƭ�

    cout << "var = " << var << endl;

    foo(&var);

    cout << "var = " << var << endl;

    return 0;
}

void foo(const int* p) {
	//�ǤJ�����Шϥ�const�A�ҥH�ܦ��F��Ū
	//�ҥH���ઽ����ȡA�ҥH�ϥ�const_cast���ܫ��Ъ���Ū��
    int* v = const_cast<int*> (p); //���F��ȡA�ݥ��h����Ū��
    *v = 20;
}

