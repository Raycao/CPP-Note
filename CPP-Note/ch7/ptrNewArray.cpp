/*
 * ptrNewArray.cpp
 *
 *  Created on: 2017�~7��7��
 *      Author: Raycao
 */

#include "ptrNewArray.h"
#include <iostream>
using namespace std;

//�ϥΰʺA�t�m�}�C
int main() {
    int size = 0;

    //�z�L�ϥΪ̿�J�Ӱt�m�}�C
    //�O����j�p�ݨD�ѨϥΪ̿�J�M�w
    cout << "�п�J�}�C���סG";
    cin >> size;
    int *arr = new int[size];

    //���B�Q�Ϋ��ЯS�ʡA���w���U���޼ƭ�
    cout << "���w�����ȡG" << endl;
    for(int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = ";
        cin >> *(arr+i);
    }

    //�Q�Ϋ��ЦL�X�U���޼ƭ�
    cout << "��ܤ����ȡG" << endl;
    for(int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = " << *(arr+i)
             << endl;
    }

    delete [] arr;

    return 0;
}
