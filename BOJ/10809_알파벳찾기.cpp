#include<iostream>
using namespace std;

int main() {
	int alpha[26];
	for (int i = 0; i < 26; i++) {
		alpha[i] = -1;
	}
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (alpha[s[i] - 97] == -1) {
			alpha[s[i] - 97] = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << alpha[i] << " ";
	}
}
