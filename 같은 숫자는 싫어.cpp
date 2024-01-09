#include <vector>
#include <iostream>

using namespace std;
// solution 1.
vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    int start = 0;
    while(1){
        int i = start;

        // solution
        if (arr[i] == arr[i + 1])
        {
            arr.erase(arr.begin() + i + 1);
        }
        else if (arr[i] != arr[i + 1])
        {
            start++;
        }
        
        if (i == (arr.size()-1))
            break;
    }
    answer = arr;
    return answer;
}
/*
 입출력 예는 맞았느나, 테스트 케이스 (signal: segmentation fault (core dumped))
 * SP.-> 벡터 중간에 원소를 삭제하는 것이 아직 어렵다.
         for/while/if만으로 모든 것을 하려고 하기에는 슬슬 한계가 보이는 것 같고
         라이브러리등을 활용해서 새로운 해결 방법을 뚫어야할 것 같다.
         
*/

// Solution 2.
vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != arr[i + 1])
        {
            answer.push_back(arr[i]);
        }
    }
    if (answer.empty())
        answer.push_back(arr[0]);
    return answer;
}
/*
 * 100/100
 * 효율성(112.10~120.51ms , 105MB)
   KP-> 첫 번째 코드가 너무 어렵게 생각한 것 같아서 다시 코드 생각해봄.
        꼭 기존 벡터를 삭제하려고하지 말고 다른 벡터에 추가하자.
        answer벡터를 활용해서 i와i+1이 다르면 answer에 push함.
*/

// Solution 3.
vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    answer.push_back(arr[0]);
    for (int i = 1; i < arr.size(); i++)
    {
        if (answer.back()!=arr[i])
        {
            answer.push_back(arr[i]);
        }
    }

    return answer;
}
/*
*  KP-> answer에 초기값을 넣고 기준값과 비교해서 다르면 answer에 추가하기.
        기준 값 내에서 비교하지 않고 다른 벡터에 초기화를 하나 해서 비교함..
        조금은 간단히 그리고 충분히 생각하자....
*/
int main()
{
    vector<int> v{ 1,1,3,3,0,1,1 };
    solution(v);
    return 0;
}