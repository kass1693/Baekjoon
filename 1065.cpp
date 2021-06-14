#include<iostream>

using namespace std;

int main() {
	int n;
	int cnt = 0;
	cin >> n;

	for (int i = 101; i <= n; i++) {
		if ((i / 100) - (i / 10 % 10) == (i / 10 % 10) - (i % 10))
			cnt++;
	}
	if (n >= 99)
		printf("%d", cnt + 99);
	else
		printf("%d", n);
}
