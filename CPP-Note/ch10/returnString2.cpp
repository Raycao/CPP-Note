/*
 * returnString2.cpp
 *
 *  Created on: 2017�~7��10��
 *      Author: Raycao
 */

#include "returnString2.h"
#include <iostream>
#include <string>
using namespace std;

string& foo();  //�ŧi�ǰѦҨ禡

//�r��ǰѦҪ�����
int main() {
 string &str = foo();

 cout << "address: " << &str
 << endl << str << endl;

 delete &str;

 return 0;
}

//�z�L�ǰѦҪ��覡�A�i�H�T�O��Ӧr����ݰO�����}�@�P
string& foo() {
 string *s = new string("This is caterpillar speaking.");

 cout << "address: " << s
 << endl << *s << endl;

 return *s;
}
