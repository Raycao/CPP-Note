/*
 * Cstring.cpp
 *
 *  Created on: 2017�~7��5��
 *      Author: Raycao
 */

#include "Cstring.h"
#include <iostream>
#include <cstring>
using namespace std;

//�ϥΦr��B�z�禡���d��
int main() {
    char str1[80] = {'\0'};
    char str2[] = "caterpillar";

    cout << "str1: " << str1 << endl
         << "str2: " << str2 << endl
         << endl;

    // �Nstr2�ƻs��str1
    strcpy(str1, str2);
    cout << "str1: " << str1 << endl
         << "str2: " << str2 << endl
         << endl;

    // �Nstr2���bstr1��
    strcat(str1, str2);
    cout << "str1: " << str1 << endl
         << "str2: " << str2 << endl
         << endl;

    cout << "str1���סG" << strlen(str1) << endl
         << "str2���סG" << strlen(str2) << endl
         << endl;

    //strcmp������A�Y�ۦP�N�Ǧ^0�A�_�h�Ǧ^1
    cout << "str1�Pstr2����G" << strcmp(str1, str2) << endl
         << endl;

    return 0;
}

