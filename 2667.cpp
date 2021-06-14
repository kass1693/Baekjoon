#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool arr[26][26];
bool c[25][25];
int n, cnt;

void dfs(int i, int j) {
	if (i < 0 || j < 0)
		return;
	c[i][j] = 1;
	arr[i][j] = 0;
	cnt++;
	if (arr[i][j + 1] == 1 && c[i][j + 1] == 0)
		dfs(i, j + 1);
	if (arr[i][j - 1] == 1 && c[i][j - 1] == 0)
		dfs(i, j - 1);
	if (arr[i + 1][j] == 1 && c[i + 1][j] == 0)
		dfs(i + 1, j);
	if (arr[i - 1][j] == 1 && c[i - 1][j] == 0)
		dfs(i - 1, j);
}

int main() {
	vector<int> v;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%1d", &arr[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == 1 && c[i][j] == 0) {
				dfs(i, j);
				v.push_back(cnt);
				cnt = 0;
			}
		}
	}
	sort(v.begin(), v.end());
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); i++) {
		printf("%d\n", v[i]);
	}
}
