//Problem
//Complete a function, solution that returns a new string by sorting the characters appearing in the string s in order from large to small.
//S consists only of uppercase and lowercase letters, and uppercase letters are considered to be smaller than lowercase letters.

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

string solution(string s) {
    sort(s.rbegin(), s.rend());
    cout << s;
    return s;
}

int main() {
    string answer = "Zbcdefg";
    solution(answer);
}

/*
string에서도 sort가 직접적으로 사용이 가능하다.

** 내림차순 **
- sort(s.rbegin(),s.rend());
- sort(s.begin(),s.end(),greater<char>());

** 오름차순 **
- sort(s.begin(),s.end());
*/