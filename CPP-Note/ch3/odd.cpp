/*
 * odd.cpp
 *
 *  Created on: 2017年7月4日
 *      Author: Raycao
 */

#include "odd.h"
#include <iostream>
using namespace std;

//while迴圈範例
int main() {
    int input = 0;
    bool replay = false;

    do {
        cout << "輸入整數值：";
        cin >> input;
        cout << "輸入數為奇數？" << ((input % 2) ? 'Y': 'N') << "\n";
        cout << "繼續(1:繼續 0:結束)？";
        cin >> replay;
    } while(replay);  //結尾是分號結尾，需要特別注意

    return 0;
}
