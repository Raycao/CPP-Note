/*
 * Overload.cpp
 *
 *  Created on: 2017�~7��10��
 *      Author: Raycao
 */

#include "Overload.h"
#include <iostream>
using namespace std;

//�i�H�ݨ�o��w�q��ӦP�˦W�r���禡
//�u���޼Ƴ������ɬۦP
void showpara(int);
void showpara(int, int);

//�����禡������
int main() {

	//�ϥΨ�ӭ����禡�A�i�H�o�{�|�ۤv�h�����A�h�I�s�һݭn������
    showpara(10);
    showpara(20, 30);

    return 0;
}

void showpara(int x) {
    cout << "�޼ơG" << x
         << endl;
}

void showpara(int x, int y) {
    cout << "�޼ơG" << x
         << "\t" << y
         << endl;
}

