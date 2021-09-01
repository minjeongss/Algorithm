//Problem
//The function solution takes an integer n as a parameter.
//Return a new integer sorting each digit of n from largest to smallest.
//For example, if n is 118372, you can return 873211.

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    string s = to_string(n);
    sort(s.rbegin(), s.rend());
    answer = stoll(s);
    return answer;
}

int main() {
    long long n = 118372;
    solution(n);
    return 0;
}

/*
** #include <algorithm> 필수

** string에서 정렬해주는 sort 함수
-내림차순인 경우
sort(s.rbegin(), s.rend());
sort(s.begin(), s.end(), greater<char>());
-오름차순인 경우
sort(s.begin(), s.end());

** string형을 long long형으로 바꾸어주는 stoll 함수
string s;
long long n;
n=stoll(s);
*/