/*
 * vectorSTL.cpp
 *
 *  Created on: 2017�~7��5��
 *      Author: Raycao
 */

#include "vectorSTL.h"
#include <iostream>
#include <vector>
using namespace std;

//�ϥΪ���ާ@vector
int main() {
		//���إߤ@�ӪŪ�vector����
		vector<int> ivector;

		//�Q��push_back�A�@�@�N�ȶ�ivector��
		//�]��vector�|�ܰʪ��W�[�e�q
	    for(int i = 0; i < 10; i++) {
	        ivector.push_back(i);
	    }

	    //�Q��iterator(���N��)���覡�A�@�@�N���e��X�ӡAiterator�O�@�ӫ���
	    for(vector<int>::iterator it = ivector.begin(); //begin�i�H���ovector�_�I��}
	        it != ivector.end(); //end��M�K�O���o���I�A�p�G���N���ثe�Ҧb����B�O�b���I�A�N�|�~�򩹤U��U�h
	        it++) { //��ܩ��U�@�Ӥ��e�A++�|�[�@�Ӥ������e������

	        cout << *it << " "; //�[�W�P���i�H���o���Ы��V��}�����e
	    }
	    cout << endl;

	    cout << "capacity: " << ivector.capacity() << endl //capacity�i�H���o�e�q
	         << "size: " << ivector.size() << endl; //�i�H���o�ثe���h���������e

	    return 0;
}

