/*
 * returnString2.cpp
 *
 *  Created on: 2017年7月10日
 *      Author: Raycao
 */

#include "returnString2.h"
#include <iostream>
#include <string>
using namespace std;

string& foo();  //宣告傳參考函式

//字串傳參考的應用
int main() {
 string &str = foo();

 cout << "address: " << &str
 << endl << str << endl;

 delete &str;

 return 0;
}

//透過傳參考的方式，可以確保兩個字串所屬記憶體位址一致
string& foo() {
 string *s = new string("This is caterpillar speaking.");

 cout << "address: " << s
 << endl << *s << endl;

 return *s;
}
