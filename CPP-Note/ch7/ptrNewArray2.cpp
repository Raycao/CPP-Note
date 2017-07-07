/*
 * ptrNewArray2.cpp
 *
 *  Created on: 2017年7月7日
 *      Author: Raycao
 */

#include "ptrNewArray2.h"
#include <iostream>
using namespace std;

//利用指標做二微陣列實例
int main() {
    int m = 0;
    int n = 0;

    cout << "輸入二維陣列維度：";
    cin >> m >> n;

    //前面有提到過，二維陣列在記憶體中並不是上下姮怡的樣子
    //而是直接位址一列一列往後接
    int *ptr = new int[m*n];

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            *(ptr + n*i + j) = i+j;
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << *(ptr+n*i+j) << "\t";
        }
        cout << endl;
    }

    delete [] ptr;

    return 0;
}
