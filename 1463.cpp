#include<iostream>
#include<string.h>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;
int arr[10000001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	arr[2] = 1;
	arr[3] = 1;
	for (int i = 4; i <= n; i++) {
		int tmp = n;
		if (i % 3 == 0) {
			tmp = arr[i / 3] + 1;
		}
		if (i % 2 == 0) {
			if (tmp > arr[i / 2] + 1)
				tmp = arr[i / 2] + 1;
		}
		if (tmp > arr[i - 1] + 1)
			tmp = arr[i - 1] + 1;
		arr[i] = tmp;
	}

	cout << arr[n];
}
