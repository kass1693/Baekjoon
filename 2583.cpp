#include<iostream>
#include<string.h>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>
#include <map>

using namespace std;

bool arr[105][105];
int m, n, k;
int tmp;
void dfs(int x, int y, int cnt) {
	if (x < 1 || y < 1 || y > m || x > n)
		return;
	tmp++;
	arr[y][x] = true;
	if(arr[y][x+1] == false)
		dfs(x + 1, y, cnt);
	if (arr[y][x - 1] == false)
		dfs(x - 1, y, cnt);
	if (arr[y + 1][x] == false)
		dfs(x, y + 1, cnt);
	if (arr[y - 1][x] == false)
		dfs(x, y - 1, cnt);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	
	cin >> m >> n >> k;
	int x1, y1, x2, y2;
	for (int i = 0; i < k; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		for (int a = x1+1; a <= x2; a++) {
			for (int b = y1+1; b <= y2; b++)
				arr[b][a] = true;
		}
	}

	vector<int> v;

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (!arr[i][j]) {
				tmp = 0;
				dfs(j, i, 0);
				v.push_back(tmp);
			}
		}
	}
	sort(v.begin(), v.end());
	cout << v.size() << "\n";
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
}

