/*
 * ptrChar3.cpp
 *
 *  Created on: 2017�~7��7��
 *      Author: Raycao
 */

#include "ptrChar3.h"
#include <iostream>
using namespace std;

//�ϥΦr�����а}�C���
int main() {
	//�����������O�r�����СA�]�U�۫��V�@�Ӧr��`��
    char *str[] = {"professor", "teacher",
                   "student", "etc."};

    for(int i = 0; i < 4; i++)
        cout << str[i] << endl;

    return 0;
}
