/*
 * stringEX.cpp
 *
 *  Created on: 2017�~7��5��
 *      Author: Raycao
 */

#include "stringEX.h"
#include <iostream>
#include <string> //�n�ϥΦr�����O�A�ݥ����J
using namespace std;

//�ϥΦr��i��ާ@
int main() {
		string str1;
	    string str2("caterpillar");
	    string str3(str2);

	    if(str1.empty()) {
	        cout << "str1 ���Ŧr��" << endl;
	    }

	    cout << "str1 ����: " << str1.size() << endl;
	    cout << "str2 ����: " << str2.size() << endl;
	    cout << "str3 ����: " << str3.size() << endl;

	    if(str1 == str2) {
	        cout << "str1 �P str2 ���e�ۦP" << endl;
	    }

	    if(str3 == str2) {
	        cout << "str3 �P str2 ���e�ۦP" << endl;
	    }

	    return 0;
}

