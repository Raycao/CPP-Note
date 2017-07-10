/*
 * staticEx.cpp
 *
 *  Created on: 2017年7月10日
 *      Author: Raycao
 */

#include "staticEx.h"
#include <iostream>
using namespace std;

void count();

//static變數的應用實例
int main() {

    for(int i = 0; i < 10; i++)
        count();
    //每次for迴圈都會呼叫此函式，但顯示的狀況會累加
    //並非出現每次都是1的重新宣告，這就是static的能力
    //一旦static變數生成，就會依值存在記憶體之中

    return 0;
}

//在函式中放了static變數
void count() {
    static int c = 1;
    cout << c << endl;
    c++;
}

