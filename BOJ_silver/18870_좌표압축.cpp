#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int>v;
	vector<int>v_origin;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	v_origin = v;

	//sort vector + remove duplication
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());

	for (int i = 0; i < n; i++) {
		//find index of origin vector
		int idx = lower_bound(v.begin(), v.end(), v_origin[i]) - v.begin();
		cout << idx << " ";
	}
}
