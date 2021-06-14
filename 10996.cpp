#include<iostream>

using namespace std;

int main() {
	int N;
	int a;
	cin >> N;
	for (int i = 0; i < N*2; i++) {
		a = i % 2;
		for (int j = 0; j < N; j++, a++) {
			if (a % 2 == 0)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
