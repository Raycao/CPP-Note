/*
 * vector2.cpp
 *
 *  Created on: 2017�~7��5��
 *      Author: Raycao
 */

#include "vector2.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
		int arr[] = {1,2,3,4,5};

		//�Q�ίx�}�إߪ�vector����
		//�Y�n�إߧ��㪺array���e��vector����
		//�Ĥ@�ӰѼƩ񤸯���l��}�A�ĤG�ӰѼƩ�̫�@�Ӥ������U�@�Ӧ�}
		vector<int> ivector(arr,arr+5);

	    for(int i = 0; i < ivector.size(); i++)
	    	cout << ivector[i] << " ";

	    return 0;
}
