/*
 * ptrPlus.cpp
 *
 *  Created on: 2017年7月7日
 *      Author: Raycao
 */

#include "ptrPlus.h"
#include <iostream>
using namespace std;

//指標加法
int main() {
		int *ptr = 0;

	    cout << "ptr位置：" << ptr  //顯示指標起始位址
	         << endl;
	    cout << "ptr+1：" << ptr+1  //因為指標定義是int型態，int型態佔四個位元組
	         << endl; 			   //所以每+1，會往後移四個位元組
	    cout << "ptr+2：" << ptr+2
	         << endl;

	    return 0;
}
