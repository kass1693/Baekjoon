#include<iostream>

int fi(int n) {
	if (n <= 1)
		return n;
	else
		return fi(n - 1) + fi(n - 2);
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", fi(n));
}
