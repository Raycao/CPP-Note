/*
 * ptrArray2.cpp
 *
 *  Created on: 2017年7月7日
 *      Author: Raycao
 */

#include "ptrArray2.h"
#include <iostream>
using namespace std;


//指標位址與陣列索引位址對應實例
int main(){
	int arr[10] = {0};
	int *ptr = arr; //因為陣列名稱就是指起點位址，所以這邊不要加&

	for(int i=0; i<10; i++){
		cout << "&arr[" << i << "]:" << &arr[i];
		cout << "\tptr+" << i << ": " << ptr+i;
		cout << endl;
	}
}
