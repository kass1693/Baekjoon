#include<iostream>
#include<stack>
#include<string.h>

using namespace std;

int main(){
	while (1) {
		stack<char> s;
		char str[101];
		bool b = true;
		scanf("%[^\n]%*c", &str);
		if (str[0] =='.')
			break;
		for (int i = 0; str[i]; i++) {
			if (str[i] == '(' || str[i] == '[')
				s.push(str[i]);
			else if (str[i] == ')') {
				if (s.empty()) {
					b = false;
					break;
				}
				if (s.top() == '(')
					s.pop();
				else {
					b = false;
					break;
				}
			}
			else if (str[i] == ']') {
				if (s.empty()) {
					b = false;
					break;
				}
				if (s.top() == '[')
					s.pop();
				else {
					b = false;
					break;
				}
			}
		}
		if (!s.empty() || !b) {
			printf("no\n");
			continue;
		}
		if (b) printf("yes\n");
	}
}
