/*
 * returnString.cpp
 *
 *  Created on: 2017年7月10日
 *      Author: Raycao
 */

#include "returnString.h"
#include <iostream>
#include <string>
using namespace std;

string foo();

//回傳字串
int main() {
 string str; // 空字串

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
