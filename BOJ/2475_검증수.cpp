/*
문제 주소: https://www.acmicpc.net/problem/2475
-문제
5자리 수가 주어질 때, 각 자리값들을 제곱하여 더하고 
10으로 나눈 나머지 구하기
*/

#include<iostream>
using namespace std;

int main() {
	int num[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> num[i];
		num[i] = num[i] * num[i];
		sum += num[i];
	}
	int total = sum % 10;
	cout << total;
}