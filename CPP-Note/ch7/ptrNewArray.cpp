/*
 * ptrNewArray.cpp
 *
 *  Created on: 2017年7月7日
 *      Author: Raycao
 */

#include "ptrNewArray.h"
#include <iostream>
using namespace std;

//使用動態配置陣列
int main() {
    int size = 0;

    //透過使用者輸入來配置陣列
    //記憶體大小需求由使用者輸入決定
    cout << "請輸入陣列長度：";
    cin >> size;
    int *arr = new int[size];

    //此處利用指標特性，指定給各索引數值
    cout << "指定元素值：" << endl;
    for(int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = ";
        cin >> *(arr+i);
    }

    //利用指標印出各索引數值
    cout << "顯示元素值：" << endl;
    for(int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = " << *(arr+i)
             << endl;
    }

    delete [] arr;

    return 0;
}
