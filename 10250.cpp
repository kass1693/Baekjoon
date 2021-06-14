#include<iostream>

using namespace std;

int main() {
	int T, h, w, n;

	scanf("%d", &T);
	while (T--) {
		scanf("%d %d %d", &h, &w, &n);
		if (n % h == 0) {
			printf("%d\n", h * 100 + n / h);
		}
		else
			printf("%d\n", n % h * 100 + (n / h + 1));
	}
}
	
