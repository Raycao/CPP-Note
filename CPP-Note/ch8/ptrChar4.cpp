/*
 * ptrChar4.cpp
 *
 *  Created on: 2017年7月7日
 *      Author: Raycao
 */

#include "ptrChar4.h"
#include <iostream>
using namespace std;

//字元指標二維陣列實例
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
