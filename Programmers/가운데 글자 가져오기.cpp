//Problem
//Create a solution, a function that returns the middle letter of the word s.
//If the length of the word is even, return the middle two characters.

#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string s) {
    string answer = "";
    if (s.size() % 2 == 0) { //even
        answer += s[(s.size() / 2) - 1];
        answer += s[s.size() / 2];
        return answer;
    }
    else { //odd
        answer = s[(s.size() / 2)];
        return answer;
    }
}

int main()
{
    string even = "abcd";
    solution(even);
    string odd = "abcde";
    solution(odd);
}

/*
짝, 홀수 길이에 따라 if 문을 사용하여 분리한 후, string의 사이즈를 이용하여 중간 글자를 가져온다.
짝수의 경우 2로 나누면 나머지가 0이 된다는 성질을 이용하면 된다.

** 짝수 길이를 가져올 때 오류가 뜬 이유 **
string은 answer+=s[s.size()]; 의 형식으로 저장을 해주고
(O) - return answer; 을 해줘야 한다.
(X) - return answer[0]+answer[1]; 의 형태는 사용할 수 없다.
*/