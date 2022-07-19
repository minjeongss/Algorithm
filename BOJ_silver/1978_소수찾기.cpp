#include<iostream>
using namespace std;

int find(int num) {
	int dec = 0;
  
  //1 제외
	if (num == 1) {
		return 0;
	}
  //나머지 수 계산
	for (int i = 2; i <= 1000; i++) {
		if (num % i == 0)
			dec += 1;
	}
  
  //출력
	if (dec == 1) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
	int num;
	int arr[1000];
	int dec = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
		dec+=find(arr[i]);
	}
	cout << dec;
}
