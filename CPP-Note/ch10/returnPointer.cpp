/*
 * returnPointer.cpp
 *
 *  Created on: 2017年7月10日
 *      Author: Raycao
 */

#include "returnPointer.h"
#include <iostream>
using namespace std;

int* createArray(int); //定義回傳指標的函式
void deleteArray(int*);

//回傳指標應用
int main() {
 int m = 0;

 cout << "陣列大小: ";
 cin >> m;

 int *arr = createArray(m);

 for(int i = 0; i < m; i++) {
 arr[i] = i;
 }

 for(int i = 0; i < m; i++) {
 cout << "arr[" << i << "] = "
 << arr[i] << endl;
 }

 deleteArray(arr);

 return 0;
}

// 傳回建立的陣列位址
int* createArray(int m) {
 int *a = new int[m]; //從這邊可以看出指標與矩陣的記憶體關係

 for(int i = 0; i < m; i++) {
 a[i] = 0;
 }

 return a; //直接傳回矩陣為位址，或者你說指標也可以
}

//因為使用動態配置的關係，記得要用delete不然記憶體空間不會被清掉
void deleteArray(int* arr) {
 delete [] arr;
}

