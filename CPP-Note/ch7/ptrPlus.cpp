/*
 * ptrPlus.cpp
 *
 *  Created on: 2017�~7��7��
 *      Author: Raycao
 */

#include "ptrPlus.h"
#include <iostream>
using namespace std;

//���Х[�k
int main() {
		int *ptr = 0;

	    cout << "ptr��m�G" << ptr  //��ܫ��а_�l��}
	         << endl;
	    cout << "ptr+1�G" << ptr+1  //�]�����Щw�q�Oint���A�Aint���A���|�Ӧ줸��
	         << endl; 			   //�ҥH�C+1�A�|���Ჾ�|�Ӧ줸��
	    cout << "ptr+2�G" << ptr+2
	         << endl;

	    return 0;
}
