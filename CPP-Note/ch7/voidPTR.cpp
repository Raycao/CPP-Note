/*
 * voidPTR.cpp
 *
 *  Created on: 2017�~7��7��
 *      Author: Raycao
 */

#include "voidPTR.h"
#include <iostream>
using namespace std;

//�w�q�L���A����
int main() {
		int var = 10;
	    void *vptr = &var ;

	    // �U���o�y���i��Avoid���A���Ф��i����
	    //cout << *vptr << endl;

	    // �૬��int���A���Шë��w��iptr
	    int *iptr = reinterpret_cast<int*>(vptr);
	    cout << *iptr << endl;

	    return 0;
}
