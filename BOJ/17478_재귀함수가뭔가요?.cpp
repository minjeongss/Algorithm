#include<iostream>
#include<string>
using namespace std;

void bar(int num) {
	for (int i = 0; i < num; i++) {
		cout << "____";
	}
}

void first(int num) {
	string arr[4];
	arr[0] = "\"재귀함수가 뭔가요?\"";
	arr[1] = "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.";
	arr[2] = "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.";
	arr[3] = "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"";
	
	for (int i = 0; i < 4; i++) {
		bar(num);
		cout << arr[i] << endl;
	}
}

void function(int num,int key) {
	if (num == 0) {
		bar(key);
		cout << "\"재귀함수가 뭔가요?\"" << endl;
		bar(key);
		cout << "\"재귀함수는 자기 자신을 호출하는 함수라네\""<<endl;
		bar(key);
		cout << "라고 답변하였지." << endl;
		return;
	}
	else {
		first(key);
		function(num - 1,key+1);
	}
	bar(key);
	cout << "라고 답변하였지." << endl;
}

int main() {
	int num;
	cin >> num;

	cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다."<<endl;
	function(num,0);
}
