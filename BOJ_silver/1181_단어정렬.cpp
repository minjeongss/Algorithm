#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(string a, string b) {
	if (a.size() != b.size())
		return a.size() < b.size();
	else
		return a < b;
}

int main() {
	int n;
	cin >> n;
	vector<string>v;
	for (int i = 0; i < n; i++) {
		string tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end(),compare);
	v.erase(unique(v.begin(), v.end()), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
}
