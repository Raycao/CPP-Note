/*
 * Size.cpp
 *
 *  Created on: 2017�~7��4��
 *      Author: Raycao
 */

#include "Size.h"
#include <iostream>
using namespace std;

//�z�Lsizeof()�禡�A�i�H���D�Ҧ����O����j�p
int main() {
	//\t�O����r���A�P���e����\n���� ����
    cout << "\n���A\t�j�p(bytes)";
    cout << "\nint\t" << sizeof(int);
    cout << "\nlong\t" << sizeof(long);
    cout << "\nfloat\t" << sizeof(float);
    cout << "\ndouble\t" << sizeof(double);
    cout << "\nchar\t" << sizeof(char);
    cout << "\n";

    return 0;
}
