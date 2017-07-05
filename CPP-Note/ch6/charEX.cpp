/*
 * charEX.cpp
 *
 *  Created on: 2017年7月5日
 *      Author: Raycao
 */

#include "charEX.h"
#include <iostream>
#include <vector>
using namespace std;

//字元陣列實作
int main() {
		//宣告字元陣列
		char str[] = "hello";

	    for(int i = 0; i < (sizeof(str)/sizeof(str[0])); i++) {
	        if(str[i] == '\0')
	            cout << " null";
	        else
	            cout << " " << str[i];
	    }
	    cout << endl;

	    return 0;
}

