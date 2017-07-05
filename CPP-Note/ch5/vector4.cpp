/*
 * vector4.cpp
 *
 *  Created on: 2017年7月5日
 *      Author: Raycao
 */

#include "vector4.h"
#include <iostream>
#include <vector>
using namespace std;

//兩個vector間可以用=來指定值，但Array是不行的喔
int main() {
	vector<int> ivector1(5, 1);
	    vector<int> ivector2; // 定義一個空的vector

	    //將1內的內容指定給2
	    ivector2 = ivector1;

	    for(int i = 0; i < ivector2.size(); i++) {
	        cout << ivector2[i] << " ";
	    }
	    cout << endl;

	    //改變2的內容
	    ivector2[0] = 2;

	    for(int i = 0; i < ivector2.size(); i++) {
	        cout << ivector2[i] << " ";
	    }
	    cout << endl;

	    for(int i = 0; i < ivector1.size(); i++) {
	        cout << ivector1[i] << " ";
	    }
	    cout << endl;

	    return 0;
}

