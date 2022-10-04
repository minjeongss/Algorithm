#include<iostream>
#include<list>
using namespace std;

int main() {
	list<char> mylist; //전체 node
	list<char>::iterator it; //cur node
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		mylist.push_back(str[i]);
	}
	it = mylist.end();
	int order;
	cin >> order;
	for (int i = 0; i < order; i++) {
		char type;
		cin >> type;
		switch (type) {
		case 'L':
			if(it!=mylist.begin())
				it--;
			break;
		case 'D':
			if (it != mylist.end())
				it++;
			break;
		case 'B':
			if (it != mylist.begin()) {
				it--;
				it = mylist.erase(it);
			}
			break;
		case 'P':
			char c;
			cin >> c;
			mylist.insert(it, c);
			break;
		}//switch end
	}//for end
	for (it = mylist.begin(); it != mylist.end(); it++) {
		cout << *it;
	}
	return 0;
}
