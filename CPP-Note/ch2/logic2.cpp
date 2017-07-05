/*
 * logic2.cpp
 *
 *  Created on: 2017年7月4日
 *      Author: Raycao
 */

#include "logic2.h"
#include <iostream>
using namespace std;

//利用位元運算子判斷是否為奇數，可以增加程式效率
int main() {
	int input = 0;

	    cout << "輸入正整數：";
	    cin >> input;
	    cout << "輸入為奇數？"
	         << (input&1 ? 'Y' : 'N')
	         << endl;

	    return 0;
}
