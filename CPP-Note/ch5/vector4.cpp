/*
 * vector4.cpp
 *
 *  Created on: 2017�~7��5��
 *      Author: Raycao
 */

#include "vector4.h"
#include <iostream>
#include <vector>
using namespace std;

//���vector���i�H��=�ӫ��w�ȡA��Array�O���檺��
int main() {
	vector<int> ivector1(5, 1);
	    vector<int> ivector2; // �w�q�@�ӪŪ�vector

	    //�N1�������e���w��2
	    ivector2 = ivector1;

	    for(int i = 0; i < ivector2.size(); i++) {
	        cout << ivector2[i] << " ";
	    }
	    cout << endl;

	    //����2�����e
	    ivector2[0] = 2;

	    for(int i = 0; i < ivector2.size(); i++) {
	        cout << ivector2[i] << " ";
	    }
	    cout << endl;

	    for(int i = 0; i < ivector1.size(); i++) {
	        cout << ivector1[i] << " ";
	    }
	    cout << endl;

	    return 0;
}

