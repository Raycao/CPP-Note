/*
 * condition2.cpp
 *
 *  Created on: 2017�~7��4��
 *      Author: Raycao
 */

#include "condition2.h"
#include <iostream>
using namespace std;

//����B�⦡�d�ҡA���q�O�_���_��
int main() {
		int score = 0;

		cout << "�п�J�Ʀr: ";
		cin >> score;
		cout << "�O�_���_��?"
			 << (score%2 ? "Yes" : "No")
			 << endl;
		//C++���D�s�ƭȳ��i�H���true�A��0���false�A�ҥH�i�H�p�W�o�˧P�_


	    return 0;
}
