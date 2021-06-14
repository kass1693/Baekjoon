#include<iostream>
#include<stack>

using namespace std;

int main() {
	int i;
	int T;
	int b;
	scanf("%d", &T);

	while (T--) {
		b = 1;
		char str[51];
		scanf("%s", str);
		stack<char> c;
		for (i = 0; str[i]; i++) {
			if (str[i] == '(')
				c.push(str[i]);
			else if (str[i] == ')')
				if (c.empty()) {
					b = 0;
					break;
				}
				else
					c.pop();
		}
		if (c.empty() && b != 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
}
