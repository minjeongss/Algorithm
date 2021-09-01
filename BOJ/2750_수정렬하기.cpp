/*
문제 주소:https://www.acmicpc.net/problem/2750
-문제
N개의 수가 주어질 때, 오름차순으로 정렬하기
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> a;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		a.push_back(num);
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << endl;
	}
}

/*
-유의사항
sort()를 사용하기 위해선 <algorithm>이 필요!
sort(a.begin(),a.end())는 오름차순
이것을 거꾸로 한다면 내림차순
*/