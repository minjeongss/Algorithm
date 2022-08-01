#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	int newA=0;
	int newB = 0;
	for (int i = 3; i >= 1; i--) {
		newA+=(A % 10)*pow(10,i-1);
		A = A / 10;
		newB += (B % 10) * pow(10, i - 1);
		B = B / 10;
	}
	if (newA > newB) {
		cout << newA;
	}
	else {
		cout << newB;
	}
}
