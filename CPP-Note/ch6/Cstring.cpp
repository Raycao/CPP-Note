/*
 * Cstring.cpp
 *
 *  Created on: 2017年7月5日
 *      Author: Raycao
 */

#include "Cstring.h"
#include <iostream>
#include <cstring>
using namespace std;

//使用字串處理函式的範例
int main() {
    char str1[80] = {'\0'};
    char str2[] = "caterpillar";

    cout << "str1: " << str1 << endl
         << "str2: " << str2 << endl
         << endl;

    // 將str2複製給str1
    strcpy(str1, str2);
    cout << "str1: " << str1 << endl
         << "str2: " << str2 << endl
         << endl;

    // 將str2接在str1後
    strcat(str1, str2);
    cout << "str1: " << str1 << endl
         << "str2: " << str2 << endl
         << endl;

    cout << "str1長度：" << strlen(str1) << endl
         << "str2長度：" << strlen(str2) << endl
         << endl;

    //strcmp的比較，若相同就傳回0，否則傳回1
    cout << "str1與str2比較：" << strcmp(str1, str2) << endl
         << endl;

    return 0;
}

