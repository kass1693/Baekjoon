#include<iostream>

using namespace std;

int main() {
	int l, p, n;
	scanf("%d %d", &l, &p);

	for (int i = 0; i < 5; i++) {
		scanf("%d", &n);
		printf("%d ", n - (l * p));
	}
}
