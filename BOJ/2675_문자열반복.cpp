#include<iostream>
#include<string>
using namespace std;

int main() {
	int c;
	int r;
	string s;

	cin >> c;
	for (int i = 0; i < c; i++) {
		cin >> r >> s;
		for (int k = 0; k < s.size(); k++) {
			for (int j = 0; j < r; j++) {
				cout << s[k];
			}
		}
		cout << endl;
	}
}
