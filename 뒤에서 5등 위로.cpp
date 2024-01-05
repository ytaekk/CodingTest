#include <string>
#include <vector>

using namespace std;
//my solution.
vector<int> solution(vector<int> num_list) {

    for (int start = 0; start < num_list.size() - 1; ++start)
    {
        int small = start;
        for (int current = start + 1; current < num_list.size(); ++current)
        {
            if (num_list[small] > num_list[current])
            {
                small = current;
            }
        }
        {
            int temp = num_list[small];
            num_list[small] = num_list[start];
            num_list[start] = temp;
        }
    }
    vector<int> answer(num_list.size() - 5);
    for (int i = 5; i < num_list.size(); i++)
        answer[i - 5] = num_list[i];
    return answer;
}

//other solution.
/*
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    sort(num_list.begin(), num_list.end());
    for (int i = 5; i < num_list.size(); i++) answer.push_back(num_list[i]);
    return answer;
}
*/