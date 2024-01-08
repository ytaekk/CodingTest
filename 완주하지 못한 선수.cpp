#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer;
    for (int i = 0; i < participant.size(); i++)
    {
        cout << "1. looking for participant : " << participant[i] << endl;
        for (int j = 0; j < completion.size(); j++)
        {
            if (participant[i] == completion[j])
            {
                cout << "2. MATCH COMPLETION : " << completion[j] << endl;
                participant[i] = " ";
                completion[j] = "";
                // Stuck Point 1.

            }
        }

    }
    for (int n = 0; n < participant.size(); n++) // Stuck Point 2.
    {
        if (participant[n] != " ")
        {
            answer = participant[n];
            cout << "The answer is : " << answer << endl;
        }
    }

    return answer;
}

/*SP.1-> 같은 이름을 찾고, 삭제해서 마지막 남은 <참여자> 벡터를 <답> string으로 복사하려했는데
         삭제하면 for의 i는 증가하고 벡터의 요소는 하나 줄어서 벡터 모든 요소를 훑지 못하는 맹점 발생
         해결하려면 1) 벡터 내용 삭제 후 모든 요소 훑는 for문 생성
                   2) 이름이 같으면 삭제하지 않고 쓰레기 값으로 벡터[i] 초기화, 나는 스페이스
* SP.2-> <참여자>벡터에서 스페이스 " " 값이 아닌 이름인 경우를 컴퓨터에서 어떻게 찾을까 고민이 됨
*        내가 지정한 쓰레기 값(스페이스) 아닌 것을 찾으면 됐는데 너무 오래 걸림...

- 정확성 테스트 5/5
- 효율성 테스트 0/5


*/  
int main()
{
    vector<string> parti = { "mislav", "stanko", "a1na" };
    vector<string> win = { "stanko", "ana", "mislav" };

    solution(parti, win);

}