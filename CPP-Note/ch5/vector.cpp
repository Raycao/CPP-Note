/*
 * vector.cpp
 *
 *  Created on: 2017�~7��5��
 *      Author: Raycao
 */

#include "vector.h"
#include <iostream>
#include <vector> //���ϥ�vector����A�ݥ�include
using namespace std;

//vecotr�����@�d��
int main() {
		vector<int> ivector(10); //�إ�vector����A�ݫ��w���A�P���סA�Parray����

		//��size���o�������
	    for(int i = 0; i < ivector.size(); i++) {
	        ivector[i] = i;
	    }

	    for(int i = 0; i < ivector.size(); i++) {
	        cout << ivector[i] << " ";
	    }
	    cout << endl;

	    return 0;
}
