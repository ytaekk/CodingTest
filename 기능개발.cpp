#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> release;
    int relase_days=0;
    
    for (int i = 0; i < progresses.size(); i++) //SP1
    {
        int left_d = ceil(double(100 - progresses[i]) / speeds[i]); //SP2
        if (left_d < 1)
            left_d = 1;
        release.push_back(left_d);
    }
    relase_days = 0;
    for (auto left_d : release)
    {
        if (relase_days == 0)
        {
            relase_days = left_d;
            answer.push_back(1);
        }
        else {
            if (relase_days >= left_d) {
                answer[answer.size() - 1]++;
            }
            else {
                relase_days = left_d;
                answer.push_back(1);
            }
        }
    }

        return answer;
}
/*
* SP.1  -> 처음에는 For문 돌려서 100이 넘을 때 그다음 값도 100이 넘으면 Relase벡터에 넣고, Relase.size를
           Answer 벡터에 넣으려고 했는데 계산이 안됐다.
           그래서 기준을 남은 일수로 잡고 그것보다 작으면 벡터에 넣는 것으로 했다.
  SP.2  -> ceil라이브러리를 처음 사용한다. (올림)이다.
           소수점 1.xxx로 나오는 것을 int로 받아서 1로 계산이 돼 결과가 틀렸었다. 그래서 소수점인 double로
           캐스팅했다.
  KP    -> 기준을 100에서 남은 일수를 정하는 것이 코드를 훨씬 쉽게 잡는다.
           다른 사람은 list로 코드를 만들었다. 아래에 참조하겠다. 자료구조 듣고 다시 풀어보자.

*/

// List Solution
/*
#include <string>
#include <vector>
#include <list>
#include <cmath>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    list<int> remain_days;
    for (auto idx = 0; idx < progresses.size(); ++idx)
        remain_days.push_back(ceil((100 - progresses[idx]) / (double)speeds[idx]));
    vector<int> answer;
    while (!remain_days.empty())
    {
        answer.push_back(0);
        auto standard = remain_days.front();
        for (auto iter = remain_days.begin(); iter != remain_days.end();)
        {
            if (*iter <= standard)
            {
                iter = remain_days.erase(iter);
                ++answer.back();
            }
            else
                break;
        }
    }
    return answer;
}
*/

int main()
{
    vector<int> p{ 90,90 };
    vector<int> s{ 10,9 };

    solution(p, s);

    return 0;

}