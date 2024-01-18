#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int main() {
	string n;
	cin >> n;
	vector<char>v;
	for (int i = 0; i < n.length(); i++) {
		v.push_back(n[i]);
	}
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	for (int i = 0; i < n.length(); i++) {
		cout << v[i];
	}
}
