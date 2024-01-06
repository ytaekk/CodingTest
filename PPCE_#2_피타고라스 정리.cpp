/*
[문제]
피타고라스 정리 코드를 한줄만 수정해 코드를 완성하자.

*/
#include <iostream>

using namespace std;

int main(void) {
    int a;
    int c;
    cin >> a >> c;

    int b_square = c * c - a * a; // 수정
    cout << b_square << endl;
    return 0;
}