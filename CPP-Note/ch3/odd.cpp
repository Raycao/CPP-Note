/*
 * odd.cpp
 *
 *  Created on: 2017�~7��4��
 *      Author: Raycao
 */

#include "odd.h"
#include <iostream>
using namespace std;

//while�j��d��
int main() {
    int input = 0;
    bool replay = false;

    do {
        cout << "��J��ƭȡG";
        cin >> input;
        cout << "��J�Ƭ��_�ơH" << ((input % 2) ? 'Y': 'N') << "\n";
        cout << "�~��(1:�~�� 0:����)�H";
        cin >> replay;
    } while(replay);  //�����O���������A�ݭn�S�O�`�N

    return 0;
}
