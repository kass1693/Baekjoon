#include<iostream>
#include<string.h>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>
#include <map>

using namespace std;

bool arr[105][105];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m;
	cin >> n >> m;
	string str;
	for (int i = 1; i <= n; i++) {
		cin >> str;
		for (int j = 1; j <= m; j++) {
			arr[i][j] = str[j - 1]-48;
		}
	}
	
	queue<pair<int, pair<int, int>>> q;
	int cnt = 1;
	q.push(make_pair(cnt, make_pair(1, 1)));
	arr[1][1] = false;
	pair<int, int> p;
	while (!q.empty()) {
		p = q.front().second;
		cnt = q.front().first;
		if (p.first == n && p.second == m) {
			cout << cnt;
			return 0;
		}
		q.pop();

		if (arr[p.first + 1][p.second]) {
			q.push(make_pair(cnt + 1, make_pair(p.first + 1, p.second)));
			arr[p.first + 1][p.second] = false;
		}
		if (arr[p.first - 1][p.second]) {
			q.push(make_pair(cnt + 1, make_pair(p.first - 1, p.second)));
			arr[p.first - 1][p.second] = false;
		}
		if (arr[p.first][p.second+1]) {
			q.push(make_pair(cnt + 1, make_pair(p.first, p.second+1)));
			arr[p.first][p.second+1] = false;
		}
		if (arr[p.first][p.second - 1]) {
			q.push(make_pair(cnt + 1, make_pair(p.first, p.second -1 )));
			arr[p.first][p.second - 1] = false;
		}
	}
}

