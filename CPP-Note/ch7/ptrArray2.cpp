/*
 * ptrArray2.cpp
 *
 *  Created on: 2017�~7��7��
 *      Author: Raycao
 */

#include "ptrArray2.h"
#include <iostream>
using namespace std;


//���Ц�}�P�}�C���ަ�}�������
int main(){
	int arr[10] = {0};
	int *ptr = arr; //�]���}�C�W�ٴN�O���_�I��}�A�ҥH�o�䤣�n�[&

	for(int i=0; i<10; i++){
		cout << "&arr[" << i << "]:" << &arr[i];
		cout << "\tptr+" << i << ": " << ptr+i;
		cout << endl;
	}
}
