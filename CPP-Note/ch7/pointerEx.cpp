/*
 * pointerEx.cpp
 *
 *  Created on: 2017�~7��6��
 *      Author: Raycao
 */

#include "pointerEx.h"
#include <iostream>
using namespace std;

//���Шϥνd��
int main() {
    int var = 10;

    //�ŧi���СA�çQ��&�B��l�N�ܼ�var����}�ǵ�����
    int *ptr = &var ;

    cout << "�ܼ�var����}�G" << &var
         << endl;
    //���Ф��s�񪺭ȬO���V�ؼЪ���}
    cout << "����ptr���V����}�G" << ptr
         << endl;
    //�[�W�P���i�H�ާ@���Ы��V��}�����e
    cout << "���Xptr���V���O�����m���ȡG" << *ptr
             << endl;


    return 0;
}

