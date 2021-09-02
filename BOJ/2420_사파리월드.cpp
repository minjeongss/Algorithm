/*
문제 주소: https://www.acmicpc.net/problem/2420
-문제
사파리월드에는 2개의 서브 도메인이 존재.
서브 도메인의 유명도의 차이가 너무 나지 않을 때 그 둘을 결합
두 서브 도메인의 유명도가 주어졌을 때, 그 차이를 구하라!
차의 절댓값 구하기!
*/

#include<iostream>
using namespace std;

int main() {
	long long N, M;
	cin >> N >> M;
	long long minus = N - M;
	if (minus < 0) cout << M - N;
	else cout << minus;
}

/*
-유의사항
유명도를 입력받을 때, int로 받았는데 실패!
그 이유는 유명도의 범위가 (-2,000,000,000 ≤ N, M ≤ 2,000,000,000)
매우 큰 범위를 가지고 있기 때문에 long long으로 받아야 함!
*/