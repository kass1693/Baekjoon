#include<iostream>
#include<string.h>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

bool flag = false;
short t, n;
void bfs(vector<vector<int>> v, vector<vector<bool>> b) {
	queue<int> q;

	q.push(0);

	while (!q.empty()) {
		int m = q.front();
		q.pop();
		int x, y;
		for (int i = 0; i < n + 2; i++) {
			if (m == i || b[m][i]) continue;
			if(v[0][m] > v[0][i])
				x = v[0][m] - v[0][i];
			else
				x = v[0][i] - v[0][m];
			if (v[1][m] > v[1][i])
				y = v[1][m] - v[1][i];
			else
				y = v[1][i] - v[1][m];
			if (x + y <= 1000) {
				b[m][i] = true;
				if (i == n + 1) {
					flag = true;
					return;
				}
				q.push(i);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> t;
	while (t--) {
		cin >> n;

		flag = false;
		vector<vector<int>> v(2, vector<int>(n + 2));
		vector<vector<bool>> b(n + 2, vector<bool>(n+2, false));
		for (int i = 0; i < n + 2; i++) 
			cin >> v[0][i] >> v[1][i];

		bfs(v, b);

		if(flag)
			cout << "happy" << endl;
		else
			cout << "sad" << endl;
	}
}
