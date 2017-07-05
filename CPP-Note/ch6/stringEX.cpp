/*
 * stringEX.cpp
 *
 *  Created on: 2017年7月5日
 *      Author: Raycao
 */

#include "stringEX.h"
#include <iostream>
#include <string> //要使用字串類別，需先載入
using namespace std;

//使用字串進行操作
int main() {
		string str1;
	    string str2("caterpillar");
	    string str3(str2);

	    if(str1.empty()) {
	        cout << "str1 為空字串" << endl;
	    }

	    cout << "str1 長度: " << str1.size() << endl;
	    cout << "str2 長度: " << str2.size() << endl;
	    cout << "str3 長度: " << str3.size() << endl;

	    if(str1 == str2) {
	        cout << "str1 與 str2 內容相同" << endl;
	    }

	    if(str3 == str2) {
	        cout << "str3 與 str2 內容相同" << endl;
	    }

	    return 0;
}

