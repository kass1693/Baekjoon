#include<iostream>
#include<string>
#include<vector>

using namespace std;

void dfs(bool arr[][51], bool c[][51], int i, int j) {
	if (i < 0 || j < 0)
		return;
	c[i][j] = 1;
	arr[i][j] = 0;
	if (arr[i][j + 1] == 1 && c[i][j + 1] == 0)
		dfs(arr, c, i, j + 1);
	if (arr[i][j - 1] == 1 && c[i][j - 1] == 0)
		dfs(arr, c, i, j - 1);
	if (arr[i + 1][j] == 1 && c[i + 1][j] == 0)
		dfs(arr, c, i + 1, j);
	if (arr[i - 1][j] == 1 && c[i - 1][j] == 0)
		dfs(arr, c, i - 1, j);
}

int main() {
	int T, M, N, K, x, y;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		bool arr[51][51] = { 0 };
		bool c[51][51] = { 0 };
		int cnt = 0;
		scanf("%d %d %d", &M, &N, &K);
		for (int j = 0; j < K; j++) {
			scanf("%d %d", &x, &y);
			arr[y][x] = 1;
		}
		for (int j = 0; j < M; j++) {
			for (int k = 0; k < N; k++) {
				if (arr[k][j] == 1) {
					dfs(arr, c, k, j);
					cnt++;
				}
			}
		}
		
		printf("%d\n", cnt);
	}
}
