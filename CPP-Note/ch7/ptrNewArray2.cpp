/*
 * ptrNewArray2.cpp
 *
 *  Created on: 2017�~7��7��
 *      Author: Raycao
 */

#include "ptrNewArray2.h"
#include <iostream>
using namespace std;

//�Q�Ϋ��а��G�L�}�C���
int main() {
    int m = 0;
    int n = 0;

    cout << "��J�G���}�C���סG";
    cin >> m >> n;

    //�e��������L�A�G���}�C�b�O���餤�ä��O�W�U�d�ɪ��ˤl
    //�ӬO������}�@�C�@�C���ᱵ
    int *ptr = new int[m*n];

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            *(ptr + n*i + j) = i+j;
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << *(ptr+n*i+j) << "\t";
        }
        cout << endl;
    }

    delete [] ptr;

    return 0;
}
