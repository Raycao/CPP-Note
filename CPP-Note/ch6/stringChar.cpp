/*
 * stringChar.cpp
 *
 *  Created on: 2017�~7��5��
 *      Author: Raycao
 */

#include "stringChar.h"
#include <iostream>
#include <string>
using namespace std;

//�r��i�H�ΤU�йB��l�A�@�@�N�r���L�X
int main() {
    string name("caterpillar");

    for(int i = 0; i < name.size(); i++) {
        cout << name[i] << endl;
    }

    return 0;
}
