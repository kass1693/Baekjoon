#include<iostream>

using namespace std;

int arr[15][15];

int main() {
	int T, k, n;

	for (int i = 1; i <= 14; i++)
		arr[0][i] = i;
	for (int i = 1; i <= 14; i++)
		arr[i][1] = 1;
	for (int i = 1; i <= 14; i++) {
		for (int j = 2; j <= 14; j++) {
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
		}
	}

	scanf("%d", &T);
	while (T--) {
		scanf("%d %d", &k, &n);
		printf("%d\n", arr[k][n]);
	}
}
	
