/*
 * getGrade.cpp
 *
 *  Created on: 2017�~7��4��
 *      Author: Raycao
 */

#include "getGrade.h"
#include <iostream>
using namespace std;

//�Q��if�P�_�����ŧO�P�_
int main() {
    int score = 0;

    cout << "��J���ơG";
    cin >> score;

    if(score >= 90)
        cout << "�oA" << endl;
    else if(score >= 80 && score < 90)
        cout << "�oB" << endl;
    else if(score >= 70 && score < 80)
        cout << "�oC" << endl;
    else if(score >= 60 && score < 70)
        cout << "�oD" << endl;
    else
        cout << "�oE(���ή�)" << endl;

    return 0;
}
