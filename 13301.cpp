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

	short n;
	cin >> n;
	arr[0] = 1;
	arr[1] = 1;

	for (int i = 2; i < n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	cout << arr[n - 1] * 2 + (arr[n - 1] + arr[n - 2]) * 2;
}

