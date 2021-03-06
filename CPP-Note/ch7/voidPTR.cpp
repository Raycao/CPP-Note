/*
 * voidPTR.cpp
 *
 *  Created on: 2017年7月7日
 *      Author: Raycao
 */

#include "voidPTR.h"
#include <iostream>
using namespace std;

//定義無型態指標
int main() {
		int var = 10;
	    void *vptr = &var ;

	    // 下面這句不可行，void型態指標不可取值
	    //cout << *vptr << endl;

	    // 轉型為int型態指標並指定給iptr
	    int *iptr = reinterpret_cast<int*>(vptr);
	    cout << *iptr << endl;

	    return 0;
}
