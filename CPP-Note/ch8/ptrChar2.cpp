/*
 * ptrChar2.cpp
 *
 *  Created on: 2017�~7��7��
 *      Author: Raycao
 */

#include "ptrChar2.h"
#include <iostream>
using namespace std;

//�r�����Ы��w�r�ꤺ�e
int main() {
		char *str = "hello";
	    void *add = 0;

	    add = str;
	    cout << str << "\t"
	         << add << endl;

	    str = "world";
	    add = str;
	    cout << str << "\t"
	         << add << endl;
	    //�r��`�Ʒ|�����@�ӰO����Ŷ��A�ҥH��}�|���Ҥ��P
	    //�i�H�o�{���s���V���e�A��m�ä��ۦP

	    return 0;
}

