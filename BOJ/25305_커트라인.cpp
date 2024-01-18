#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n, k,low = 0;
	cin >> n >> k;
	vector<int>numbers;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		numbers.insert(numbers.begin() + i, tmp);
	}
	sort(numbers.begin(),numbers.end());
	reverse(numbers.begin(), numbers.end());
	low = numbers[k - 1];
	cout << low;
}
