/*
 * vector.cpp
 *
 *  Created on: 2017年7月5日
 *      Author: Raycao
 */

#include "vector.h"
#include <iostream>
#include <vector> //欲使用vector物件，需先include
using namespace std;

//vecotr物件實作範例
int main() {
		vector<int> ivector(10); //建立vector物件，需指定型態與長度，與array類似

		//用size取得物件長度
	    for(int i = 0; i < ivector.size(); i++) {
	        ivector[i] = i;
	    }

	    for(int i = 0; i < ivector.size(); i++) {
	        cout << ivector[i] << " ";
	    }
	    cout << endl;

	    return 0;
}
