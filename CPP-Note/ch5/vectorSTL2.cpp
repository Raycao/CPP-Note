/*
 * vectorSTL2.cpp
 *
 *  Created on: 2017年7月5日
 *      Author: Raycao
 */

#include "vectorSTL2.h"
//要對vector做演算法操作，需先在入標頭黨
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

//對vector做演算法操作
int main() {
    int iarr[] = {30, 12, 55, 31, 98, 11, 41, 80, 66, 21};
    vector<int> ivector(iarr, iarr + 10);

    // 排序
    sort(ivector.begin(), ivector.end());

    for(vector<int>::iterator it = ivector.begin();
        it != ivector.end();
        it++) {

    cout << *it << " ";
    }
    cout << endl;

    cout << "輸入搜尋值：";
    int search = 0;
    cin >> search;

    vector<int>::iterator it =
    find(ivector.begin(), ivector.end(), search);

    if(it != ivector.end()) {
        cout << "找到搜尋值！" << endl;
    }
    else {
        cout << "找不到搜尋值！" << endl;
    }

    // 反轉
    reverse(ivector.begin(), ivector.end());

    for(vector<int>::iterator it = ivector.begin();
        it != ivector.end();
        it++) {

        cout << *it << " ";
    }
    cout << endl;

    return 0;
}

