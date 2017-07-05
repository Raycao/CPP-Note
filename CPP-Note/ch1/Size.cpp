/*
 * Size.cpp
 *
 *  Created on: 2017年7月4日
 *      Author: Raycao
 */

#include "Size.h"
#include <iostream>
using namespace std;

//透過sizeof()函式，可以知道所佔的記憶體大小
int main() {
	//\t是跳格字元，與先前獎的\n跳行 類似
    cout << "\n型態\t大小(bytes)";
    cout << "\nint\t" << sizeof(int);
    cout << "\nlong\t" << sizeof(long);
    cout << "\nfloat\t" << sizeof(float);
    cout << "\ndouble\t" << sizeof(double);
    cout << "\nchar\t" << sizeof(char);
    cout << "\n";

    return 0;
}
