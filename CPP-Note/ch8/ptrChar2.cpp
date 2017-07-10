/*
 * ptrChar2.cpp
 *
 *  Created on: 2017年7月7日
 *      Author: Raycao
 */

#include "ptrChar2.h"
#include <iostream>
using namespace std;

//字元指標指定字串內容
int main() {
		char *str = "hello";
	    void *add = 0;

	    add = str;
	    cout << str << "\t"
	         << add << endl;

	    str = "world";
	    add = str;
	    cout << str << "\t"
	         << add << endl;
	    //字串常數會佔有一個記憶體空間，所以位址會有所不同
	    //可以發現重新指向內容，位置並不相同

	    return 0;
}

