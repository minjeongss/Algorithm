//Problem
//Complete the function, solution that returns Even if the integer num is even and returns Odd if the integer num is odd.

#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    string answer = "";
    if (num % 2 == 0) {
        answer = "Even";
        return answer;
    }
    else {
        answer = "Odd";
        return answer;
    }
}

int main() {
    int even = 2;
    solution(even);
    int odd = 3;
    solution(odd);
}

/*
% : 나머지를 반환해주는 것임.

짝수라면, 2를 나누었을 때 나머지가 0이 될 것이다.
홀수라면, 나머지가 1이 될 것이다.
*/