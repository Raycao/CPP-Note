/*
 * vector3.cpp
 *
 *  Created on: 2017�~7��5��
 *      Author: Raycao
 */

#include "vector3.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
		int arr[] = {1,2,3,4,5};

		//�Q�ίx�}�إߪ�vector����
		//�Y�n�إߤ@�q�d��vector����
		//�Ĥ@�ӰѼƩ�ؼЪ���l��}�A�ĤG�ӰѼƩ�̫�@�Ӥ������U�@�Ӧ�}
		//�ҥH�p�U��ܬ��ĤG�Ӥ�����ĤT�Ӥ���
		vector<int> ivector(arr+1,arr+3);

	    for(int i = 0; i < ivector.size(); i++)
	    	cout << ivector[i] << " ";

	    return 0;
}
