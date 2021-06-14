#include<iostream>
#include<stack>

using namespace std;

int main() {
	stack<int> s;
	int k;
	int n;
	int sum = 0;

	scanf("%d", &k);
	while (k--) {
		scanf("%d", &n);
		if (n == 0)
			s.pop();
		else
			s.push(n);
	}
	
	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}
	printf("%d", sum);
	
}
