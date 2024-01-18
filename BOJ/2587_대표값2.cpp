#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int numbers[5];
	int center, avg,sum = 0;
	for (int i = 0; i < 5; i++) {
		int tmp;
		cin >> tmp;
		numbers[i] = tmp;
		sum += tmp;
	}
	sort(numbers, numbers + 5);
	avg = sum / 5;
	center = numbers[2];
	cout << avg << "\n" << center;
}
