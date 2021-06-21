#include<iostream>
#include<string.h>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>
#include <map>

using namespace std;
bool ar[10];
int n, m, k;
void dfs(int cnt) {
	if (cnt == m) {
		for (int i = 1; i <= n; i++) {
			if(ar[i])
				cout << i << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = k; i <= n; i++) {
		if (ar[i]) continue;
		ar[i] = true;
		k = i;
		dfs(cnt + 1);
		ar[i] = false;
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

