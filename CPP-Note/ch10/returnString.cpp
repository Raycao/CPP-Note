/*
 * returnString.cpp
 *
 *  Created on: 2017�~7��10��
 *      Author: Raycao
 */

#include "returnString.h"
#include <iostream>
#include <string>
using namespace std;

string foo();

//�^�Ǧr��
int main() {
 string str; // �Ŧr��

 str = foo();

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
