/*
 * student.cpp
 *
 *  Created on: 2017年7月4日
 *      Author: Raycao
 */

#include "student.h"
#include <iostream>
using namespace std;

//變數的範例，透過指定變數值，可以改變輸出呈現。
int main() {
	    int ageForStudent;
	    double scoreForStudent;
	    char levelForStudent;

	    cout << "\n年級\t得分\t等級";
	    cout << "\n" << ageForStudent
	         << "\t" << scoreForStudent
	         << "\t" << levelForStudent
	         << "\n";

	    ageForStudent = 5;
	    scoreForStudent = 80.0;
	    levelForStudent = 'B';

	    cout << "\n年級\t得分\t等級";
	    cout << "\n" << ageForStudent
	         << "\t" << scoreForStudent
	         << "\t" << levelForStudent
	         << "\n";

	    return 0;
}


