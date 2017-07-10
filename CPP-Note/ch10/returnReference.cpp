/*
 * returnReference.cpp
 *
 *  Created on: 2017年7月10日
 *      Author: Raycao
 */

#include "returnReference.h"
#include <iostream>
#include <string>
using namespace std;

string foo();

//編譯器也會自行將物件的傳回結果自動設定為傳參考實例
int main() {
 string str = foo();

 cout << "address: " << &str
 << endl << str << endl;

 str = foo(); // 指定新字串，會複製一份

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
