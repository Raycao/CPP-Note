/*
 * vector3.cpp
 *
 *  Created on: 2017年7月5日
 *      Author: Raycao
 */

#include "vector3.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
		int arr[] = {1,2,3,4,5};

		//利用矩陣建立的vector物件
		//若要建立一段範圍的vector物件
		//第一個參數放目標的初始位址，第二個參數放最後一個元素的下一個位址
		//所以如下表示為第二個元素到第三個元素
		vector<int> ivector(arr+1,arr+3);

	    for(int i = 0; i < ivector.size(); i++)
	    	cout << ivector[i] << " ";

	    return 0;
}
