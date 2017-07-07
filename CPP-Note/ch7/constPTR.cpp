/*
 * constPTR.cpp
 *
 *  Created on: 2017年7月7日
 *      Author: Raycao
 */

#include "constPTR.h"
#include <iostream>
using namespace std;

//要先宣告定義的函示
void foo(const int*);

//有關於指標的常數實例
int main() {
    int var = 10;
    const int var2 = 30;
    const int *ptt = &var2; //const的變數要用const的指標

    cout << "const指標" << *ptt << endl; //如此才可以順利用*取用數值

    cout << "var = " << var << endl;

    foo(&var);

    cout << "var = " << var << endl;

    return 0;
}

void foo(const int* p) {
	//傳入的指標使用const，所以變成了唯讀
	//所以不能直接改值，所以使用const_cast改變指標的唯讀性
    int* v = const_cast<int*> (p); //為了改值，需先去掉唯讀性
    *v = 20;
}

