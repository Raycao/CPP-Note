/*
 * stringChar.cpp
 *
 *  Created on: 2017年7月5日
 *      Author: Raycao
 */

#include "stringChar.h"
#include <iostream>
#include <string>
using namespace std;

//字串可以用下標運算子，一一將字元印出
int main() {
    string name("caterpillar");

    for(int i = 0; i < name.size(); i++) {
        cout << name[i] << endl;
    }

    return 0;
}
