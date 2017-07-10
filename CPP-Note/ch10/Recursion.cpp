/*
 * Recursion.cpp
 *
 *  Created on: 2017�~7��10��
 *      Author: Raycao
 */

#include "Recursion.h"
#include <iostream>
using namespace std;

int gcd(int, int);

//���jrecursion���������
int main() {
    int m = 0;
    int n = 0;

    cout << "��J��ơG";
    cin >> m >> n;

    cout << "GCD: "
         << gcd(m, n) << endl;

    return 0;
}

//��X�̤j���]�ơA�Q�λ��j��@����۰��k
int gcd(int m, int n) {
    if(n == 0)
        return m;
    else
        return gcd(n, m % n);
}

