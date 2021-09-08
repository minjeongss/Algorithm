/*
문제 주소: https://www.acmicpc.net/problem/2439
2438과 동일
+ 오른쪽 정렬
*/

#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = N-1; j >=i; j--) {
			cout << " ";
		}
		for (int k = 1; k <= i; k++) {
			cout << "*";
		}
		cout << endl;
	}
}