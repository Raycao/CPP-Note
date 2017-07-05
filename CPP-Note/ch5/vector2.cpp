/*
 * vector2.cpp
 *
 *  Created on: 20177る5ら
 *      Author: Raycao
 */

#include "vector2.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
		int arr[] = {1,2,3,4,5};

		//ノ痻皚ミvectorン
		//璝璶ミЧ俱arrayず甧vectorン
		//材把计じ﹍材把计程じ
		vector<int> ivector(arr,arr+5);

	    for(int i = 0; i < ivector.size(); i++)
	    	cout << ivector[i] << " ";

	    return 0;
}
