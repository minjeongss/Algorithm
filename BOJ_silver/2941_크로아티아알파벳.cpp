#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	string cro;
	cin >> cro;
	int count = 0;

	for (int i = 0; i < cro.size(); i++) {
		switch (cro[i]) {
		case 'c':
			if (cro[i + 1] == '=' || cro[i + 1] == '-') {
				i++;
			}
			break;
		case 'd':
			if (cro[i + 1] == '-') {
				i++;
			}
			else if (cro[i + 1] == 'z' && cro[i + 2] == '=') {
				i += 2;
			}
			break;
		case 'l':
			if (cro[i + 1] == 'j') {
				i++;
			}
			break;
		case 'n':
			if (cro[i + 1] == 'j') {
				i++;
			}
			break;
		case 's':
			if (cro[i + 1] == '=') {
				i++;
			}
			break;
		case 'z':
			if (cro[i + 1] == '=') {
				i++;
			}
			break;
		}
		count++;
	}
	cout << count;
}
