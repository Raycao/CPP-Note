/*
 * NoRecursion.cpp
 *
 *  Created on: 2017�~7��10��
 *      Author: Raycao
 */

#include "NoRecursion.h"
#include <iostream>
using namespace std;

int gcd(int, int);

//�Q�ΰj��@��٭����k
int main() {
    int m = 0;
    int n = 0;

    cout << "��J��ơG";
    cin >> m >> n;

    cout << "GCD: "
         << gcd(m, n) << endl;

    return 0;
}

//�Q�ΰj�骺�覡������۰��k
int gcd(int m, int n) {
    int r = 0;

    while(n != 0) {
        r = m % n;
        m = n;
        n = r;
    }

    return m;
}
