/*
[문제]
문자열 my_string, overwrite_string과 정수 s가 주어집니다.
문자열 my_string의 인덱스 s부터 overwrite_string의 길이만큼을
문자열 overwrite_string으로 바꾼 문자열을
return 하는 solution 함수를 작성해 주세요.
- 입출력 예
  my_string	 | overwrite_string	| s |	result
"He11oWor1d" |	"lloWorl"	    | 2	| "HelloWorld"
*/

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {

    for (int i = 0; i < overwrite_string.length(); i++)
        my_string[s + i] = overwrite_string[i];

    return my_string;
}

//other solution : using  string.replace()
/*string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    answer = my_string.replace(s, overwrite_string.size(), overwrite_string);
    return answer;
}
*/