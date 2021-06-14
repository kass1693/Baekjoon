#include<iostream>

using namespace std;

int main() {
	int n, cnt = 0;

	scanf("%d",&n);

	for (int i = 0; i <= n / 3; i++) {
		for (int j = 0; j <= n / 5; j++) {
			if ((i * 3 + j * 5) == n) {
				printf("%d", i + j);
				return 0;
			}
		}
	}
	printf("-1");
}
