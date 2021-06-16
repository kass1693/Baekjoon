#include<iostream>
#include<string.h>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;
long long arr[81];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int o, e, m;
	m = n;
	o = m / 5;
	m %= 5;
	if (m % 2 != 0 && n >=5) {
		o--;
		m += 5;
	}
	if (m % 2 != 0) {
		cout << "-1";
	}
	else {
		e = m / 2;

		cout << o + e;
	}
}

