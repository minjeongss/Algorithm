/*
문제 주소: https://www.acmicpc.net/problem/1550
-문제
16진수 -> 10진수 변환
*/

#include<iostream>
using namespace std;

int main() {
	int s;
	hex(cin);
	cin >> s;
	cout << dec << s << endl; //10진수
	//cout << oct << s << endl; -> 8진수
	//cout << hex << s << endl; -> 16진수
}

/*
-유의사항
16진수:hex
10진수:dec
8진수:oct

입력시,
hex(cin) / dec(cin) / oct(cin)

출력시,
cout<<hex<<s;
cout<<dec<<s;
cout<<oct<<s;
*/