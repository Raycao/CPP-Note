/*
 * Recursion.cpp
 *
 *  Created on: 2017年7月10日
 *      Author: Raycao
 */

#include "Recursion.h"
#include <iostream>
using namespace std;

int gcd(int, int);

//遞迴recursion的實際應用
int main() {
    int m = 0;
    int n = 0;

    cout << "輸入兩數：";
    cin >> m >> n;

    cout << "GCD: "
         << gcd(m, n) << endl;

    return 0;
}

//找出最大公因數，利用遞迴實作輾轉相除法
int gcd(int m, int n) {
    if(n == 0)
        return m;
    else
        return gcd(n, m % n);
}

