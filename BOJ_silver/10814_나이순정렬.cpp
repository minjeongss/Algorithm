#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(pair<int,string>a,pair<int,string>b) {
	return a.first < b.first;
}
int main() {
	int n;
	cin >> n;
	vector<pair<int, string>>v;
	for (int i = 0; i < n; i++) {
		int x;
		string y;
		cin >> x >> y;
		v.push_back({ x,y });
	}
	stable_sort(v.begin(), v.end(),compare);
	for (int i = 0; i < n; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}
}
