#include<iostream>

using namespace std;

int main() {
	int N;
	int a = 1;
	cin >> N;
	for (int i = 0, k=0; i < (N*2)-1; i++, k+=a) {
		for (int j = 0; j <= k; j++) {
			printf("*");
		}
		printf("\n");
		if (i == N-1)
			a = -1;
	}
}
