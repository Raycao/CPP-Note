/*
 * logic2.cpp
 *
 *  Created on: 2017�~7��4��
 *      Author: Raycao
 */

#include "logic2.h"
#include <iostream>
using namespace std;

//�Q�Φ줸�B��l�P�_�O�_���_�ơA�i�H�W�[�{���Ĳv
int main() {
	int input = 0;

	    cout << "��J����ơG";
	    cin >> input;
	    cout << "��J���_�ơH"
	         << (input&1 ? 'Y' : 'N')
	         << endl;

	    return 0;
}
