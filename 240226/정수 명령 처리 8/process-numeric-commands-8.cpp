#include<bits/stdc++.h>
#include<list>
using namespace std;

int n;
list<int> linkedList;
string command;
int num;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> command;
		if (command == "push_front") {
			cin >> num;
			linkedList.push_front(num);
		}
		else if (command == "push_back") {
            cin >> num;
			linkedList.push_back(num);
		}
		else if (command == "pop_front") {
            cout << linkedList.front() << "\n";
			linkedList.pop_front();
		}
		else if (command == "pop_back") {
			cout << linkedList.back() << "\n";
			linkedList.pop_back();
		}
		else if (command == "size") {
			cout << linkedList.size() << "\n";
		}
		else if (command == "empty") {
			if (linkedList.size() > 0) {
				cout << "0\n";
			}
			else {
				cout << "1\n";
			}
		}
		else if (command == "front") {
			cout << linkedList.front() << "\n";
		}
		else { // back
			cout << linkedList.back() << "\n";
		}
	}

	return 0;
}