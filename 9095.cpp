#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int factorial(int n) {

	int result = 1;

	for (int i = 1; i <= n; ++i)
		result *= i;

	return result;
}

int main() {
	int T, n;

	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		int count = 0;
		scanf("%d", &n);
		for (int j = 0; j <= n / 3; j++)
			for (int k = 0; k <= n / 2; k++)
				for (int l = 0; l <= n; l++) {
					if ((j * 3) + (k * 2) + (l) == n) {
						count += factorial(j + k + l) / (factorial(j)*factorial(k)*factorial(l));
					}
				}
		printf("%d\n", count);
	}
}
