#include<iostream>
#include<string.h>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>
#include<map>

using namespace std;

bool ar[16][16];
int n;
int cnt;

bool is(int x, int y) {
	for (int i = 1; i < n; i++) {
		if (y - i < 0 || x + i >= n) goto LT;
		if (ar[y - i][x + i]) return false;
	LT:
		if (y - i < 0 || x - i < 0) goto TOP;
		if (ar[y - i][x - i]) return false;
	TOP:
		if (y - i < 0) break;
		if (ar[y - i][x]) return false;
	}
	return true;
}

void dfs(int m, int y) {
	if (m == n) {
		cnt++;
		return;
	}
	for (int j = 0; j < n; j++) {
		if (!ar[y][j])
			if (is(j, y)) {
				ar[y][j] = true;
				dfs(m + 1, y + 1);
				ar[y][j] = false;
			}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	dfs(0, 0);
	cout << cnt;
}
