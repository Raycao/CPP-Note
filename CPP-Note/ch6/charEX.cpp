/*
 * charEX.cpp
 *
 *  Created on: 2017�~7��5��
 *      Author: Raycao
 */

#include "charEX.h"
#include <iostream>
#include <vector>
using namespace std;

//�r���}�C��@
int main() {
		//�ŧi�r���}�C
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

