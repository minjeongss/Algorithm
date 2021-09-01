/*
문제 주소: https://www.acmicpc.net/problem/2839
-문제
상근이가 설탕공장에서 설탕을 배달한다
배달할 봉지: 5킬로그램, 3킬로그램
-> 5킬로그램을 최대로 사용할 것!
정확히 N킬로그램을 배달해야 할 때, 몇 봉지인지 출력
*/

#include <iostream>
using namespace std;

int main() {
	int kg;
	cin >> kg;
	int cnt = -1;

	int five = kg / 5; //최대한 5kg을 많이 빼주기
	for (int i = five; i >= 0; i--) {
		
		int cal = kg - (i * 5); //5kg을 뺀 것들 값에서 빼주기

		if (cal % 3 == 0) { //3으로 나누기 가능
			cnt = i + (cal / 3);
			break;
		}
	}
	cout << cnt;
}

/*
-유의사항
greedy algorithm으로 푸는 문제!
이 알고리즘은? 최적해를 구하는데 사용되는 근사적인 방법
*/
