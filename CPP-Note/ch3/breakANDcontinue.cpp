/*
 * breakANDcontinue.cpp
 *
 *  Created on: 2017�~7��4��
 *      Author: Raycao
 */

#include "breakANDcontinue.h"
#include <iostream>
using namespace std;

//continue�Pbreak�����P
int main(){
	for(int i=0; i<=5; i++){
		if(i == 4)
			break;
		//�ϥ�break�|�������X�j��A���ޫ᭱�٦��S���B��
		cout<< " " << i;
	}

	for(int i=0; i<=5; i++){
		if(i==4)
			continue;
		//�ϥ�continue�|���X�����j��A�|�A�~��i��U�@���j��
		cout<< " " << i;
	}

}
