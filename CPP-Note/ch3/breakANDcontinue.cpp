/*
 * breakANDcontinue.cpp
 *
 *  Created on: 2017年7月4日
 *      Author: Raycao
 */

#include "breakANDcontinue.h"
#include <iostream>
using namespace std;

//continue與break的不同
int main(){
	for(int i=0; i<=5; i++){
		if(i == 4)
			break;
		//使用break會直接跳出迴圈，不管後面還有沒有運算
		cout<< " " << i;
	}

	for(int i=0; i<=5; i++){
		if(i==4)
			continue;
		//使用continue會跳出此次迴圈，會再繼續進行下一次迴圈
		cout<< " " << i;
	}

}
