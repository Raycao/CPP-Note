/*
 * boolean.cpp
 *
 *  Created on: 2017�~7��4��
 *      Author: Raycao
 */

#include "boolean.h"
#include <iostream>
using namespace std;

//����bool���A�Ҧ��j�p
int main() {
		cout << "sizeof(bool)\t" << sizeof(bool) << "\n";
	    cout << "sizeof(true)\t" << sizeof(true) << "\n";
	    cout << "sizeof(false)\t" << sizeof(false) << "\n";

	    cout << "true\t" << static_cast<int>(true) << "\n";
	    cout << "false\t" << static_cast<int>(false) << "\n";
	    //�ϥ�static_cast�㦡���A�ഫ�]Explicit type conversion�^
	    //�N���L���A�ରint���A
}

