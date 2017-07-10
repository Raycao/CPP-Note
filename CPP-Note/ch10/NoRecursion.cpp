/*
 * NoRecursion.cpp
 *
 *  Created on: 2017年7月10日
 *      Author: Raycao
 */

#include "NoRecursion.h"
#include <iostream>
using namespace std;

int gcd(int, int);

//利用迴圈作轉斬香除法
int main() {
    int m = 0;
    int n = 0;

    cout << "輸入兩數：";
    cin >> m >> n;

    cout << "GCD: "
         << gcd(m, n) << endl;

    return 0;
}

//利用迴圈的方式做輾轉相除法
int gcd(int m, int n) {
    int r = 0;

    while(n != 0) {
        r = m % n;
        m = n;
        n = r;
    }

    return m;
}
