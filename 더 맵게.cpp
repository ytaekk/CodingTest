#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;

    while (1) {
        sort(scoville.begin(), scoville.end(), [](int a, int b) {return a > b; });
        {
            //print
            cout << "Current : [ ";
            for (int n : scoville)
                cout << n << " ";
            cout << "]" << endl;;
        }

        if (scoville.back() < K && scoville.size() >= 2) {
            int new_s = scoville.back() + (scoville[scoville.size() - 2] * 2);
            cout << "Pop Back Min : " << scoville.back() << endl;
            scoville.pop_back();
            cout << "Pop Back Min 2 : " << scoville.back() << endl;
            scoville.pop_back();
            scoville.push_back(new_s);
            cout << "Push New : " << scoville.back() << endl;
            answer++;
            cout << "answer : " << answer << endl;
        }
        else if (scoville.back() >= K)
            break;

        else if (scoville.back() < K && scoville.size() == 1) {
            answer = -1;
            break;
        }


    }
    cout << "the answer is "<<answer;
    return answer;
}
/*
* 테스트 100
* 효율성 0
  KP -> 다른 사람들 값 참조해보니 벡터로 하면 효율성이 0으로 나온다고 한다. 큐를 써야하는데
        큐는 아직 안배워서 강의를 새로 들어야겠다.

*/
int main()
{
    vector<int> v{ 1,1,2,3 };
    solution(v, 20);
    return 0;
}