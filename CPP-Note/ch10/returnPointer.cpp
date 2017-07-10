/*
 * returnPointer.cpp
 *
 *  Created on: 2017�~7��10��
 *      Author: Raycao
 */

#include "returnPointer.h"
#include <iostream>
using namespace std;

int* createArray(int); //�w�q�^�ǫ��Ъ��禡
void deleteArray(int*);

//�^�ǫ�������
int main() {
 int m = 0;

 cout << "�}�C�j�p: ";
 cin >> m;

 int *arr = createArray(m);

 for(int i = 0; i < m; i++) {
 arr[i] = i;
 }

 for(int i = 0; i < m; i++) {
 cout << "arr[" << i << "] = "
 << arr[i] << endl;
 }

 deleteArray(arr);

 return 0;
}

// �Ǧ^�إߪ��}�C��}
int* createArray(int m) {
 int *a = new int[m]; //�q�o��i�H�ݥX���лP�x�}���O�������Y

 for(int i = 0; i < m; i++) {
 a[i] = 0;
 }

 return a; //�����Ǧ^�x�}����}�A�Ϊ̧A�����Ф]�i�H
}

//�]���ϥΰʺA�t�m�����Y�A�O�o�n��delete���M�O����Ŷ����|�Q�M��
void deleteArray(int* arr) {
 delete [] arr;
}

