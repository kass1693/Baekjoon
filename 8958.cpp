#include<iostream>

using namespace std;

int main() {
	int T;
	char c[81];

	cin >> T;
	while (T--) {
		//scanf("%s", c);
		cin >> c;
		int s = 0;
		int ps = 1;
		for (int i = 0; c[i]; i++) {
			if (c[i] == 'O') {
				s += ps++;
			}
			else
				ps = 1;
		}
		printf("%d\n", s);
	}
}
