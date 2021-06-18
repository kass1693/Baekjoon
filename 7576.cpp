#include<iostream>
#include<string.h>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>
#include <map>

using namespace std;

int arr[1005][1005];


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int m, n;
	cin >> m >> n;
	queue<pair<int, pair<int, int>>> q;
	int t = 0;
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 0) {
				arr[i][j] = -1;
				t++;
			}
			else if (arr[i][j] == -1) arr[i][j] = 0;
			else {
				q.push(make_pair(cnt,make_pair(j, i)));
			}
		}
	}
	if (q.empty()) {
		cout << -1;
		return 0;
	}
	pair<int, int> p;
	
	while (!q.empty()) {
		p = q.front().second;
		cnt = q.front().first;
		q.pop();
		if (arr[p.second + 1][p.first] == -1) {
			q.push(make_pair(cnt + 1, make_pair(p.first, p.second + 1)));
			arr[p.second + 1][p.first] = cnt + 1;
			t--;
		}
		if (arr[p.second - 1][p.first] == -1) {
			q.push(make_pair(cnt + 1, make_pair(p.first, p.second - 1)));
			arr[p.second - 1][p.first] = cnt + 1;
			t--;
		}
		if (arr[p.second][p.first + 1] == -1) {
			q.push(make_pair(cnt + 1, make_pair(p.first + 1, p.second)));
			arr[p.second][p.first + 1] = cnt + 1;
			t--;
		}
		if (arr[p.second][p.first - 1] == -1) {
			q.push(make_pair(cnt + 1, make_pair(p.first - 1, p.second)));
			arr[p.second][p.first - 1] = cnt + 1;
			t--;
		}
	}
	if (t)
		cout << -1;
	else
		cout << cnt;

	return 0;
}

