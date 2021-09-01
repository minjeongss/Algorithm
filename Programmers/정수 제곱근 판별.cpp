//Problem
//For any positive integer n, we want to determine if n is the power of any positive integer x or not.
//Complete a function that returns the power of x + 1 if n is the square of the positive integer x, and-1 if n is not the square of the positive integer x.
//Input/output example #1
//121 is a positive integer to the power of 11, so returns 144 to the power of (11 + 1).
//Input/output example #2
//3 is not a positive integer squared, so it returns -1.

#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    if (sqrt(n) == (int)sqrt(n)) {
        answer = sqrt(n);
        return (answer + 1) * (answer + 1);
    }
    else {
        return -1;
    }

}

int main() {
    long long number = 121;
    solution(number);
    long long number2 = 3;
    solution(number2);
}

/*
sqrt()는 해당하는 숫자가 121이라면, sqrt(121)=11; 임을 알려주는 함수이다.
sqrt(n)을 했을 경우와 이것이 int 형으로 변환되었을 때의 값이 동일하다면, 양의 정수의 제곱근이라는 것을 알려주는 것이다.

** 이때 #include <cmath> 해주어야 함 **
*/