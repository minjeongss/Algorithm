//binafy search part
//내장되어 있는 binary_search 사용함
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);

	int n, m;
	cin >> n;
	vector<int>v;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	cin >> m;
	for (int i = 0; i < m; i++) {
		int tmp;
		cin >> tmp;
		if (binary_search(v.begin(), v.end(), tmp))
			cout << "1 ";
		else
			cout << "0 ";
	}
}
