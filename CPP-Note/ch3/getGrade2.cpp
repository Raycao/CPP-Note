/*
 * getGrade2.cpp
 *
 *  Created on: 2017年7月4日
 *      Author: Raycao
 */

#include "getGrade2.h"
#include <iostream>
using namespace std;

//依樣是判斷分數級別，此次使用switch
int main() {
    int score = 0;
    int level = 0;

    cout << "輸入分數：";
    cin >> score;
    level = score/10;

    //switch只能判斷字元或數字
    switch(level) {
        case 10:
        case 9:
            cout << "得A" << endl;
            //記得要使用break，否則不會跳出，會一直執行下去
            break;
        case 8:
            cout << "得B" << endl;
            break;
        case 7:
            cout << "得C" << endl;
            break;
        case 6:
            cout << "得D" << endl;
            break;
        default:
            cout << "得E(不及格)" << endl;
    }

    return 0;
}
