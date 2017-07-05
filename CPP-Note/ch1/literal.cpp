/*
 * literal.cpp
 *
 *  Created on: 2017年7月4日
 *      Author: Raycao
 */

#include "literal.h"
#include <iostream>
using namespace std;

//字面常數會有預設自己的型態
int main() {
		//同樣是1，但預設型態便有所不同
		cout << "sizeof(1): " << sizeof(1) << "\n";
	    cout << "sizeof(1.0): " << sizeof(1.0) << "\n";

	    return 0;
}
