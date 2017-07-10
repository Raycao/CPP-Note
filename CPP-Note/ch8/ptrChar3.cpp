/*
 * ptrChar3.cpp
 *
 *  Created on: 2017年7月7日
 *      Author: Raycao
 */

#include "ptrChar3.h"
#include <iostream>
using namespace std;

//使用字元指標陣列實例
int main() {
	//期內元素都是字元指標，也各自指向一個字串常數
    char *str[] = {"professor", "teacher",
                   "student", "etc."};

    for(int i = 0; i < 4; i++)
        cout << str[i] << endl;

    return 0;
}
