/*
 * function.cpp
 *
 *  Created on: 2017�~7��7��
 *      Author: Raycao
 */

#include "function.h"
#include <iostream>
#include "math.h"
using namespace std;

//�禡��ҡA���Y�ɸ��J
int main() {
    int num = 0;
    int power = 0;

    cout << "��J�ƭȡG";
    cin >> num;

    cout << "��J����G";
    cin >> power;

    cout << num << " ����G"
         << pow2(num) << endl;
    cout << num << " ��" << power << "����G"
         << pow(num, power)
         << endl;

    return 0;
}
