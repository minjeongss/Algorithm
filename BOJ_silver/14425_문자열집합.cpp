#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n, m;
	int count = 0;
	cin >> n >> m;
	vector<string>v;
	for (int i = 0; i < n; i++) {
		string tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < m; i++) {
		string tmp;
		cin >> tmp;
		if (binary_search(v.begin(), v.end(), tmp))
			count++;
	}
	cout << count;
}
