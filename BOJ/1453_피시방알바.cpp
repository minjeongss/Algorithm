/*
문제 주소: https://www.acmicpc.net/problem/1453
-문제
피시방에는 1-100까지 번호가 존재
들어오는 손님은 원하는 자리에 착석
해당 자리에 사람이 있으면 거절 당함!
거절당하는 사람의 수 출력
(단, 자리에 앉으면 자리를 비우는 일 X)
*/

#include<iostream>
using namespace std;

int main() {
	int customers;
	cin >> customers;
	int reject = 0;
	int arr[101] = { 0, };//0으로 초기화
	for (int i = 0; i < customers; i++) {
		int num;
		cin >> num;
		if (arr[num]== 0) { //자리가 없는 경우
			arr[num] = 1;
		}
		else { //자리가 있는 경우 -> 거절
			reject++;
		}
	}
	cout << reject;
}

/*
-유의사항
배열을 100이 아니라 101로 할 것!
100으로 한다면, 하나의 오류가 발생하기 때문이다!
*/