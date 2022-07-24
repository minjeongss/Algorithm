#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	int N=0;
	cin >> N;
	vector<string> word;
	string wo;
	int size;

	int findnot = 0;
	int find = 0;
	for (int i = 0; i < N; i++) {
		findnot = 0;
		//입력
		cin >> wo;
		word.push_back(wo);

		size = word[i].size();
		int check[26] = { 0, }; //알파벳 공간
		int tmp;
		//단어 중복 체크
		for (int k = 0; k < size; k++) {
			tmp = (int)word[i][k];
			if (word[i][k]!=word[i][k+1]) {
				tmp -= 97;
				if (check[tmp] == 1) {
					findnot = 1;
					break;
				}
				check[tmp] = 1;
			}
		}
		if (findnot == 0) {
			find += 1;
		}

		for (int m = 0; m < 26; m++) {
			check[m] = 0;
		}

	}
	cout << find;
}
