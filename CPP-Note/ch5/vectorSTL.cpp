/*
 * vectorSTL.cpp
 *
 *  Created on: 2017年7月5日
 *      Author: Raycao
 */

#include "vectorSTL.h"
#include <iostream>
#include <vector>
using namespace std;

//使用物件操作vector
int main() {
		//先建立一個空的vector物件
		vector<int> ivector;

		//利用push_back，一一將值塞進vector中
		//因此vector會變動的增加容量
	    for(int i = 0; i < 10; i++) {
	        ivector.push_back(i);
	    }

	    //利用iterator(迭代器)的方式，一一將內容丟出來，iterator是一個指標
	    for(vector<int>::iterator it = ivector.begin(); //begin可以取得vector起點位址
	        it != ivector.end(); //end當然便是取得終點，如果迭代器目前所在為止步是在終點，就會繼續往下找下去
	        it++) { //表示往下一個內容，++會加一個元素內容的長度

	        cout << *it << " "; //加上星號可以取得指標指向位址的內容
	    }
	    cout << endl;

	    cout << "capacity: " << ivector.capacity() << endl //capacity可以取得容量
	         << "size: " << ivector.size() << endl; //可以取得目前有多首元素內容

	    return 0;
}

