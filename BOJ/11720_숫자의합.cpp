#include<iostream>
using namespace std;

int main() {
	int num;
	string total;
	int sum = 0;
	cin >> num;
	cin >> total;
	for (int i = 0; i < num; i++) {
		sum += total[i] - '0';
	}
	cout << sum;
}q
