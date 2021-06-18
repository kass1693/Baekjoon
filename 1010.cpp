#include<iostream>
#include<string.h>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>
#include <map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	while (T--) {
		int n, m;
		cin >> n >> m;
		unsigned long long sum = 1, fa = 1;
		if (n * 2 <= m) {
			for (int i = 0; i < n; i++)
				sum *= m - i;
			for (int i = 2; i <= n; i++) {
				fa *= i;
			}
		}
		else {
			for (int i = 0; i < m-n; i++)
				sum *= m - i;
			for (int i = 2; i <= m - n; i++)
				fa *= i;
		}
		cout << sum / fa << "\n";
	}
}

