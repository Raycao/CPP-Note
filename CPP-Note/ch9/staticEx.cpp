/*
 * staticEx.cpp
 *
 *  Created on: 2017�~7��10��
 *      Author: Raycao
 */

#include "staticEx.h"
#include <iostream>
using namespace std;

void count();

//static�ܼƪ����ι��
int main() {

    for(int i = 0; i < 10; i++)
        count();
    //�C��for�j�鳣�|�I�s���禡�A����ܪ����p�|�֥[
    //�ëD�X�{�C�����O1�����s�ŧi�A�o�N�Ostatic����O
    //�@��static�ܼƥͦ��A�N�|�̭Ȧs�b�O���餧��

    return 0;
}

//�b�禡����Fstatic�ܼ�
void count() {
    static int c = 1;
    cout << c << endl;
    c++;
}

