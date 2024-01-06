/*
[문제]
가습기 빈칸 채우기
*/

#include <string>
#include <vector>

using namespace std;

int func1(int humidity, int val_set) {
    if (humidity < val_set)
        return 3;
    return 1;
}

int func2(int humidity) {
    if (humidity >= 50)
        return 0;
    else if (humidity >= 40)
        return 1;
    else if (humidity >= 30)
        return 2;
    else if (humidity >= 20)
        return 3;
    else if (humidity >= 10)
        return 4;

    else if (humidity >= 0)
        return 5;
}

int func3(int humidity, int val_set) {
    if (humidity < val_set)
        return 1;
    return 0;
}

int solution(string mode_type, int humidity, int val_set) {
    int answer = 0;
    if (mode_type == "auto") {
        answer = func2(humidity); // 함수 내 변수 가져오기 잊지 말것.
                                  // 이것 땜에 시간 오래 걸림
    }
    else if (mode_type == "target") {
        answer = func1(humidity, val_set);
    }
    else if (mode_type == "minimum") {
        answer = func3(humidity, val_set);
    }
    return answer;
}