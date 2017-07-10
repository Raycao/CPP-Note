/*
 * defaultParameter.cpp
 *
 *  Created on: 2017年7月7日
 *      Author: Raycao
 */

#include "defaultParameter.h"
#include <iostream>
using namespace std;

//在宣告函式中預設引數
double area(double, double = 3.14);

int main() {
    double r, pi;

    cout << "輸入半徑與PI: ";
    cin >> r >> pi;

    cout << "面積(自訂PI): " << area(r, pi)
         << endl;
    cout << "面積(default): " << area(r)
         << endl;

    return 0;
}

//函式內容
double area(double r, double pi) {
    return r*r*pi;
}
