/*
문제 주소: https://www.acmicpc.net/problem/1546
-문제
기말고사 점수 조작하기!
점수들 중 최고점 찾기
모든 점수=해당 점수/최댓값*100 으로 변경
*/

#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	double scores[1000];
	for (int i = 0; i < N; i++) {
		double socre;
		cin >> socre;
		scores[i] = socre;
	}

	int max = scores[0];
	for (int i = 1; i < N; i++) {
		if (max < scores[i]) {
			max = scores[i];
		}
	}

	double total = 0;
	for (int i = 0; i < N; i++) {
		scores[i] = scores[i] / max * 100;
		total += scores[i];
	}
	total = total / N;
	cout << total << endl;
}

/*
-유의사항
배열을 처음 선언할 때, 크기에 변수가 들어갈 수 없다.
예를 들어, int num[Num]에서 Num이 아닌 숫자가 들어가야 한다!

-실수했던 것
40/80의 경우에 0.5가 될 것이라고 예상했지만 결과는 0이었다.
자료형을 int로 해주었기 때문이다!
자료형을 double로 모두 수정하니 결과값이 제대로 출력되는 것을 확인했다.
*/