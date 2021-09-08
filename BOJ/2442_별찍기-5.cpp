/*
문제 주소: https://www.acmicpc.net/problem/2442
-문제
1줄 별 1개
2줄 별 3개
N줄 별 (2*N)-1개
+ 가운데 기준으로 대칭
*/

#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) { //N번 줄까지 출력
		for (int j = i; j <= N - 1; j++) {
			cout << " ";
		}
		for (int k = 1; k <=2*i-1; k++) {
			cout << "*";
		}
		cout << endl;
	}
}