#include<iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int k = 1; k < i; k++)
			printf(" ");
		for (int j = (N * 2) - i; j >= i; j--)
			printf("*");
		printf("\n");
	}
	for (int i = N; i < (N * 2) - 1; i++) {
		for (int k = (N * 2) - 2; k > i; k--)
			printf(" ");
		for (int j = N; j <= i*2-N+2; j++)
			printf("*");
		printf("\n");
	}
}
