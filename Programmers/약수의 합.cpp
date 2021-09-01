//Problem
//Complete a function, solution that takes an integer n and returns the sum of all the divisors of n.
//Input/Output example #1
// The factors of 12 are 1, 2, 3, 4, 6, 12, which is 28.
//Input/Output example #2
//The factors of 5 are 1, 5, and that's 6.

#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            answer += i;
        }
    }
    return answer;
}

int main() {
    int number = 12;
    solution(number);
}

/*
약수라면 나누었을 때, 나머지가 0이 되는 것을 이용한다.
for 구문을 이용하여, 해당 i가 number의 약수라면 answer이란 값에 더해준다.
최종적으로 약수들의 합이 answer에 가도록 해준다.
*/