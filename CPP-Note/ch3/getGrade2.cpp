/*
 * getGrade2.cpp
 *
 *  Created on: 2017�~7��4��
 *      Author: Raycao
 */

#include "getGrade2.h"
#include <iostream>
using namespace std;

//�̼ˬO�P�_���ƯŧO�A�����ϥ�switch
int main() {
    int score = 0;
    int level = 0;

    cout << "��J���ơG";
    cin >> score;
    level = score/10;

    //switch�u��P�_�r���μƦr
    switch(level) {
        case 10:
        case 9:
            cout << "�oA" << endl;
            //�O�o�n�ϥ�break�A�_�h���|���X�A�|�@������U�h
            break;
        case 8:
            cout << "�oB" << endl;
            break;
        case 7:
            cout << "�oC" << endl;
            break;
        case 6:
            cout << "�oD" << endl;
            break;
        default:
            cout << "�oE(���ή�)" << endl;
    }

    return 0;
}
