/*
 * gotoExample.cpp
 *
 *  Created on: 2017�~7��4��
 *      Author: Raycao
 */

#include "gotoExample.h"
#include <iostream>
using namespace std;

//goto�d��
//��ĳ���g�{���٬O���n��goto�A�H�K�y���������V��
int main() {
    int input = 0;

begin:

    cout << "��J�@�ơG";
    cin >> input;

    if(input == 0)
        goto error;

    cout << "100 / " << input
         << " = " << static_cast<double>(100) / input
         << endl;

    return 0;

error:
    cout << "���Ƥ��i��0" << endl;
    goto begin;
}
