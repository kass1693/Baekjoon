#include<iostream>
#include<stack>

using namespace std;

int arr[100001];

int main() {
	int n, r = 0;
	stack<int> s;
	string str;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	s.push(1);
	int i = 2;
	str += "+\n";
	while (!s.empty() || i<=n) {
		if (!s.empty()) {
			if (arr[r] == s.top()) {
				s.pop();
				r++;
				str += "-\n";
				continue;
			}
		}
		if (i <= n) {
			s.push(i);
			i++;
			str += "+\n";
		}
		else if (arr[r] != s.top()) {
			printf("NO\n");
			return 0;
		}
	}
	cout << str;
}
	
