#include<iostream>
#include<string.h>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>
#include <map>

using namespace std;
bool ar[10];
vector<int> v;
int n, m, k;
void dfs(int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << v[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = k; i <= n; i++) {
		ar[i] = true;
		v.push_back(i);
		k = i;
		dfs(cnt + 1);
		ar[i] = false;
		v.pop_back();
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	k = 1;
	dfs(0);
}

