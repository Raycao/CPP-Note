/*
 * stringMethod.cpp
 *
 *  Created on: 2017�~7��5��
 *      Author: Raycao
 */

#include "stringMethod.h"
#include <iostream>
#include <string>
using namespace std;

//�ϥ�string���O���l�ͤ�k
int main() {
    string str1;
    string str2("caterpillar");
    string str3(str2);

    // assign: ���w�r��
    str1 = str1.assign(str2, 0, 5); //�ĤG�ӰѼƥN��_�I�A�ĤT�ӰѼƥN��Ѷ}�Y�����n�Ӥ��e
    //�]���W�z��ܬ��A�Nstr2�r���0�}�l�A�]�A�_�I�b�����᪺���Ӥ��e�A�@�_���w��str1
    cout << "str1: " << str1 << endl;
    str1 = str1.assign("caterpillar", 5, 6);
    cout << "str1: " << str1 << endl;

    str1 = "";

    // append: �r��걵
    str1 = str1.append(str2, 0, 5);
    str1 = str1.append(str3, 5, 6);
    cout << "str1: " << str1 << endl;

    // find: �M��r���m
    cout << "�M��str1�����Ĥ@��pill: "
         << str1.find("pill", 0) << endl;

    // insert: ���J�r��
    cout << "�bstr1���J�r��***: "
         << str1.insert(5, "***") << endl;

    cout << "str1����: " << str1.length() << endl;

    return 0;
}
