/*
문제 주소: https://www.acmicpc.net/problem/1152
-문제
문자열 주어짐
띄어쓰기를 단위로 단어 개수 세리기!
*/

#include<iostream>
#include<string>
using namespace std;

int main() {

	int cnt = 1;

	string str;
	getline(cin, str);

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ') {
			cnt++;
		}
	}

	if (str[0] == ' ') cnt--;
	if (str[str.length() - 1] == ' ') cnt--;

	cout << cnt << endl;
}

/*
-유의사항
빈칸이 있는 문자열의 경우 cin이 아닌 getline 사용하기!
'\n'이 아니라 ' '가 빈칸이라는 것!
-실수한 것
빈칸인 경우를 다 카운트 한 다음에, 앞과 뒤에 있는 빈칸의 경우 삭제해주기
*/