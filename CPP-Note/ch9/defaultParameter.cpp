/*
 * defaultParameter.cpp
 *
 *  Created on: 2017�~7��7��
 *      Author: Raycao
 */

#include "defaultParameter.h"
#include <iostream>
using namespace std;

//�b�ŧi�禡���w�]�޼�
double area(double, double = 3.14);

int main() {
    double r, pi;

    cout << "��J�b�|�PPI: ";
    cin >> r >> pi;

    cout << "���n(�ۭqPI): " << area(r, pi)
         << endl;
    cout << "���n(default): " << area(r)
         << endl;

    return 0;
}

//�禡���e
double area(double r, double pi) {
    return r*r*pi;
}
