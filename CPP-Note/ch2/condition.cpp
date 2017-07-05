/*
 * condition.cpp
 *
 *  Created on: 2017年7月4日
 *      Author: Raycao
 */

#include "condition.h"
#include <iostream>
using namespace std;

//條件運算式範例，判斷是否及格
int main() {
		int score = 0;

		cout << "請輸入數字: ";
		cin >> score;
		cout << "是否為奇數?"
			 << (score%2 ? "Yes" : "No")
			 << endl;

	    return 0;
}
