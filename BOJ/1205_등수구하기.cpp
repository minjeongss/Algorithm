include<iostream>
using namespace std;

/*
n:현재 리스트 점수 개수
x: 새로운 점수
p: 랭킹 리스트 최대 개수
*/

int main() {
	int n;
	int new_score;
	int p;
	int num[50];
	int rank=0;

  //입력받기
	cin >> n;
	cin >> new_score;
	cin >> p;
	if (n > 0) {
		for (int i = 0; i < n; i++) {
			cin >> num[i];
		}
	}
  
  //계산
	if (n == p) {
		for (int i = 0; i < n; i++) {
			if (new_score >= num[i]) {
				rank = i + 1;
				break;
			}
		}
		if (new_score <= num[n - 1]) {
			rank = -1;
		}

	}
	else if (n == 0) {
		rank = 1;
	}
	else {
		for (int i = 0; i < n; i++) {
			if (new_score >= num[i]) {
				rank=i + 1;
				break;
			}
		}
		if (new_score < num[n - 1]) {
			rank = n+1;
		}
	}
  
  //출력
	cout << rank;
}
