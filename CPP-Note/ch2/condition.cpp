/*
 * condition.cpp
 *
 *  Created on: 2017�~7��4��
 *      Author: Raycao
 */

#include "condition.h"
#include <iostream>
using namespace std;

//����B�⦡�d�ҡA�P�_�O�_�ή�
int main() {
		int score = 0;

		cout << "�п�J�Ʀr: ";
		cin >> score;
		cout << "�O�_���_��?"
			 << (score%2 ? "Yes" : "No")
			 << endl;

	    return 0;
}
