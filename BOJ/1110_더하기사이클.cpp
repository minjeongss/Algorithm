/*
문제 주소: https://www.acmicpc.net/problem/1110
-문제
10보다 작은 경우, 0붙여 두 자리 수 만들고 
10보다 큰 경우, 두 자리 수 유지

그 다음, 각 자리 숫자 더하고
주어진 수의 가장 오른쪽 자리 수와 구한 합의 오른쪽 자리 수 이어 붙이기

ex)
두 자리 수: AB라고 가정
A+B=CD라고 하자.
그러면 새로운 수는? BD
*/

#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	
	int result;
	int firstNum;
	int secondNum;
	int sum;
	int total;
	int turn = 0;

	result = num; //초기값 설정해주기

	while (1) {
		firstNum = result / 10;//10의 자리
		secondNum = result % 10;//1의 자리
		sum = firstNum + secondNum;//합
		result = (secondNum * 10) + (sum % 10);
		
		turn++;
		if (result == num) break;
	}
	cout << turn << endl;
}

/*
-유의사항
10보다 작은 경우, 굳이 경우를 나누어서 생각하지 않아도 OK
firstNum에서 0이 나오기때문에 상관이 없다!

-실수했던 것
while문 안에서 값을 계속 업데이트 해야 한다는 사실을 잊었음!
*/
