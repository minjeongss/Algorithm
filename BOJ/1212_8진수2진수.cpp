/*
문제 주소: https://www.acmicpc.net/problem/1212
-문제
8진수를 2진수로 변환하기
*/

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	string eight;
	cin >> eight;
	vector<string> second;
	for (int i = 0; i < eight.size(); i++) {
		switch (eight[i]) { //second에 각자리에 해당하는 2진수 넣어줌
		case '0':
			second.push_back("000");
			break;
		case '1':
			second.push_back("001");
			break;
		case '2':
			second.push_back("010");
			break;
		case '3':
			second.push_back("011");
			break;
		case '4':
			second.push_back("100");
			break;
		case '5':
			second.push_back("101");
			break;
		case'6':
			second.push_back("110");
			break;
		case '7':
			second.push_back("111");
			break;
		}
	}
	
	if (eight[0] == '0') { //숫자 자체가 0인 경우
		cout << 0;
	}
	else {
		if (eight[0] == '1') {
			cout << "1";
		}
		else if (eight[0] == '2') {
			cout << "10";
		}
		else if (eight[0] == '3') {
			cout << "11";
		}
		else {
			cout << second[0];
		}

		for (int i = 1; i < eight.size(); i++) {
			cout << second[i];
		}
	}

}

/*
-유의사항
1. string을 사용하기 위해선 #include<string> 필수
2. string에선 전체 문자열 크기를 알고 싶을 때 size() 사용
3. switch 구문에서 case 내부에 break; 사용
: break를 사용하지 않으면 계속 뒤의 case로 넘어가서 이상한 값이 넣어지게 됨!
*/