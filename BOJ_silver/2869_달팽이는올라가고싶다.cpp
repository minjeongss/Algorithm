#include<iostream>
using namespace std;

int main() {
	int A, B, V;
	cin >> A >> B >> V;
	int total_leng = V - A;
	int leng = A - B;
	int day=0;
	if (total_leng % leng != 0) {
		day += 1;
	}
	day += (total_leng / leng) + 1;
	cout << day;
}
