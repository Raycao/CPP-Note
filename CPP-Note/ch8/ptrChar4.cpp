/*
 * ptrChar4.cpp
 *
 *  Created on: 2017�~7��7��
 *      Author: Raycao
 */

#include "ptrChar4.h"
#include <iostream>
using namespace std;

//�r�����ФG���}�C���
int main() {
    char *str[][2] = {"professor", "Justin",
                      "teacher", "Momor",
                      "student", "Caterpillar"};

    for(int i = 0; i < 3; i++) {
        cout << str[i][0] << ": "
             << str[i][1] << endl;
    }

    return 0;
}
