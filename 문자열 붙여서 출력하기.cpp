﻿/*
**문제 설명**
두 개의 문자열 str1, str2가 공백으로 구분되어 입력으로 주어집니다.
입출력 예와 같이 str1과 str2을 이어서 출력하는 코드를 작성해 보세요.

-입력 
apple pen
-출력
applepen
*/

//solution
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str1, str2;
    cin >> str1 >> str2;
    cout << str1 << str2;
    return 0;
}