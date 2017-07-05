/*
 * logic.cpp
 *
 *  Created on: 2017年7月4日
 *      Author: Raycao
 */

#include "logic.h"
#include <iostream>
using namespace std;

//位元運算子
int main() {
	cout << "AND運算：" << endl;
	    cout << "0 AND 0\t\t" << (0 & 0) << endl;
	    cout << "0 AND 1\t\t" << (0 & 1) << endl;
	    cout << "1 AND 0\t\t" << (1 & 0) << endl;
	    cout << "1 AND 1\t\t" << (1 & 1) << endl;

	    cout << "OR運算：" << endl;
	    cout << "0 OR 0\t\t" << (0 | 0) << endl;
	    cout << "0 OR 1\t\t" << (0 | 1) << endl;
	    cout << "1 OR 0\t\t" << (1 | 0) << endl;
	    cout << "1 OR 1\t\t" << (1 | 1) << endl;

	    cout << "XOR運算：" << endl;
	    cout << "0 XOR 0\t\t" << (0 ^ 0) << endl;
	    cout << "0 XOR 1\t\t" << (0 ^ 1) << endl;
	    cout << "1 XOR 0\t\t" << (1 ^ 0) << endl;
	    cout << "1 XOR 1\t\t" << (1 ^ 1) << endl;

	    cout << "NOT運算：" << endl;
	    cout << "NOT 0\t\t" << (!0) << endl;
	    cout << "NOT 1\t\t" << (!1) << endl;

	    return 0;
}


