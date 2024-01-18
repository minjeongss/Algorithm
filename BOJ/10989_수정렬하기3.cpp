#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	//time limit
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int list[10001] = {0};
	for (int i = 1; i <= n; i++) {
		int tmp; cin >> tmp;
		list[tmp] += 1;
	}
	for (int i = 1; i <= 10000; i++) {
		for (int t = 1; t <= list[i]; t++) {
			cout << i << "\n";
		}
	}
}
