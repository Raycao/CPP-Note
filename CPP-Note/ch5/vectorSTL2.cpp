/*
 * vectorSTL2.cpp
 *
 *  Created on: 2017�~7��5��
 *      Author: Raycao
 */

#include "vectorSTL2.h"
//�n��vector���t��k�ާ@�A�ݥ��b�J���Y��
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

//��vector���t��k�ާ@
int main() {
    int iarr[] = {30, 12, 55, 31, 98, 11, 41, 80, 66, 21};
    vector<int> ivector(iarr, iarr + 10);

    // �Ƨ�
    sort(ivector.begin(), ivector.end());

    for(vector<int>::iterator it = ivector.begin();
        it != ivector.end();
        it++) {

    cout << *it << " ";
    }
    cout << endl;

    cout << "��J�j�M�ȡG";
    int search = 0;
    cin >> search;

    vector<int>::iterator it =
    find(ivector.begin(), ivector.end(), search);

    if(it != ivector.end()) {
        cout << "���j�M�ȡI" << endl;
    }
    else {
        cout << "�䤣��j�M�ȡI" << endl;
    }

    // ����
    reverse(ivector.begin(), ivector.end());

    for(vector<int>::iterator it = ivector.begin();
        it != ivector.end();
        it++) {

        cout << *it << " ";
    }
    cout << endl;

    return 0;
}

