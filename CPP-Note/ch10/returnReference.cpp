/*
 * returnReference.cpp
 *
 *  Created on: 2017�~7��10��
 *      Author: Raycao
 */

#include "returnReference.h"
#include <iostream>
#include <string>
using namespace std;

string foo();

//�sĶ���]�|�ۦ�N���󪺶Ǧ^���G�۰ʳ]�w���ǰѦҹ��
int main() {
 string str = foo();

 cout << "address: " << &str
 << endl << str << endl;

 str = foo(); // ���w�s�r��A�|�ƻs�@��

 cout << "address: " << &str
 << endl << str << endl;

 return 0;
}

string foo() {
 string s = "This is caterpillar speaking.";

 cout << "address: " << &s
 << endl << s << endl;

 return s;
}
