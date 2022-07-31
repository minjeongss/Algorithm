#include<iostream>
#include<string>
using namespace std;

int add(string k) {
	int num = stoi(k);
	for (int i = 0; i < k.size(); i++) {
		num += (k[i]-'0');
	}
	return num;
}

int main() {
	int check[10001] = { 0, };
	for (int i = 1; i <= 10000; i++) {
		string s = to_string(i);
		if (add(s) <= 10000) {
			check[add(s)] += 1;
		}
	}

	for (int k = 1; k <= 10000; k++) {
		if (check[k] == 0) {
			cout << k;
			if (k != 9993)
				cout << endl;
		}
	}
}
