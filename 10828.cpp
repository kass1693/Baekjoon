#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main() {
	int T, x, y;
	stack<int> s;
	scanf("%d", &T);
	while (T--) {
		string str;
		cin >> str;
		if (str == "push") {
			int n;
			scanf("%d", &n);
			s.push(n);
		}
		else if (str == "pop") {
			if (s.empty())
				printf("-1\n");
			else {
				printf("%d\n", s.top());
				s.pop();
			}
		}
		else if (str == "size") {
			printf("%d\n", s.size());
		}
		else if (str == "empty") {
			printf("%d\n", s.empty());
		}
		else if (str == "top") {
			if (s.empty())
				printf("-1\n");
			else {
				printf("%d\n", s.top());
			}
		}
	}
}
	
