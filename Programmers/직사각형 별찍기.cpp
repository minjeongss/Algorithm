//Problem
// This problem is given two integers n and m as standard input.
//Use the star (*) character to print a rectangle with n width and m length.
//example
//input
//5 3
//Print
//*****
//*****
//*****

#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    cin >> a >> b;
    for (int i = 0; i < b; i++) {
        for (int k = 0; k < a; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

/*
오른쪽/왼쪽 별 개수 차례대로 입력한다.
이중 for 구문은 안쪽 for이 다 돌아간 후, 바깥 for이 돌아가게 되는 구조이다.

** 이중 for 이용하게 된다면 **
- 오른쪽 별 개수: 안쪽 for의 반복
- 왼쪽 별 개수: 바깥 for의 반복
*/