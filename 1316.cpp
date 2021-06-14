#include<iostream>

using namespace std;

int main() {
	int n;
	char c[101];
	int count = 0;
	scanf("%d", &n);

	while (n--) {
		int a[27] = { 0 };
		scanf("%s", c);
		a[(c[0] - 97)]++;
		for (int i = 1; c[i]; i++) {
			if (a[(c[i] - 97)] >= 1 && c[i] != c[i - 1]) {
				count--;
				break;
			}
			a[c[i] - 97]++;
		}
		count++;
	}
	printf("%d", count);
}
