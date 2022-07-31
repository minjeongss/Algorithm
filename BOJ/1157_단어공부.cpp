#include<iostream>
#include<string>
using namespace std;

int main() {
	string word;
	int arr[26] = { 0, };
	int big = 0;
	int aha;
	int find = 0;
	cin >> word;

	for (int i = 0; i < word.size(); i++) {
		if (word[i] >= 65 && word[i] <= 90)
			word[i] += 32;
		word[i] -= 97;
		arr[word[i]] += 1;
	}
	
	for (int k = 0; k < 26; k++) {
		if (arr[k] > big) {
			big = arr[k];
			aha = k;
		}
	}
	for (int j = 0; j < 26; j++) {
		if (arr[j] == big) {
			find += 1;
		}
	}

	if (find > 1) {
		cout << "?";
	}
	else {
		aha += 65;
		cout << char(aha);
	}
}
