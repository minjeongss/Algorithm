/*
문제 주소: https://www.acmicpc.net/problem/2438
-문제
1줄 별 1개
2줄 별 2개
N줄 별 N개
*/

#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int k = 1; k <= i; k++) {
			cout << "*";
		}
		cout << endl;
	}
}