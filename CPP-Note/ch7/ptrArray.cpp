/*
 * ptrArray.cpp
 *
 *  Created on: 2017年7月7日
 *      Author: Raycao
 */

#include "ptrArray.h"
#include <iostream>
using namespace std;

//陣列與指標
int main() {
		int arr[10] = {0};
	    cout << "arr :\t\t" << arr
	         << endl;
	    cout << "&arr[0]: \t" << &arr[0]
	         << endl;
	    //可以發現兩個位址相同

	    return 0;
}
