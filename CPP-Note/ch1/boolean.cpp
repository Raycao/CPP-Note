/*
 * boolean.cpp
 *
 *  Created on: 2017年7月4日
 *      Author: Raycao
 */

#include "boolean.h"
#include <iostream>
using namespace std;

//驗證bool型態所佔大小
int main() {
		cout << "sizeof(bool)\t" << sizeof(bool) << "\n";
	    cout << "sizeof(true)\t" << sizeof(true) << "\n";
	    cout << "sizeof(false)\t" << sizeof(false) << "\n";

	    cout << "true\t" << static_cast<int>(true) << "\n";
	    cout << "false\t" << static_cast<int>(false) << "\n";
	    //使用static_cast顯式型態轉換（Explicit type conversion）
	    //將布林型態轉為int型態
}

