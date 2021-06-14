#include<iostream>
#include<string.h>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int arr[5001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<string> v(n);
		for (int i = 0; i < n; i++)
			cin >> v[i];
		sort(v.begin(), v.end());
		for (int i = 0; i < n - 1; i++) {
			int j;
			for (j = 0; j < v[i].length(); j++) {
				if (v[i][j] != v[i + 1][j])
					break;
			}
			if (j == v[i].length()) {
				cout << "NO" << endl;
				n = -1;
				break;
			}
		}
		if (n != -1)
			cout << "YES" << endl;
	}
}
