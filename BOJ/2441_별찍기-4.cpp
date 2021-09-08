/*
문제 주소: https://www.acmicpc.net/problem/2441
-문제
2440과 동일
+ 오른쪽 정렬
*/

#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <i; j++) {
			cout << " ";
		}
		for (int k = N; k >= i; k--) {
			cout << "*";
		}
		cout << endl;
	}
}

/*
5 0
4 1
3 2
2 3
1 4
*/