/*
 * pttArray3.cpp
 *
 *  Created on: 2017�~7��7��
 *      Author: Raycao
 */

#include "pttArray3.h"
#include <iostream>
using namespace std;

//�ϥΫ��Ш��X�}�C���e
int main() {
    const int length = 5;
    int arr[length] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    // �H���Ф覡�s�����
    for(int i = 0; i < length; i++) {
        cout << "*(ptr+" << i << "): " << *(ptr+i)
             << endl;
    }
    cout << endl;

    // �H�}�C�覡�s�����
    for(int i = 0; i < length; i++) {
        cout << "ptr[" << i << "]: " << ptr[i]
             << endl;
    }
    cout << endl;

    // �H���Ф覡�s�����
    for(int i = 0; i < length; i++) {
        cout << "*(arr+" << i << "): " << *(arr+i)
             << endl;
    }
    cout << endl;

    // �H�}�C�覡�s�����
    for(int i = 0; i < length; i++) {
        cout << "arr[" << i << "]: " << arr[i]
             << endl;
    }
    cout << endl;

    return 0;
}

