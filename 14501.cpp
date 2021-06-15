#include<iostream>
#include<string.h>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;
int arr[16][2];
int sum[21];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	short n;
	
	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i][0] >> arr[i][1];
	}

	for (int i = n - 1; i >= 0; i--) {
		if (i + arr[i][0] > n) {

		}
		else {
			int max = sum[i + arr[i][0]];
			for (int j = i + arr[i][0] + 1; j < n; j++) {
				if (max < sum[j]) max = sum[j];
			}
			sum[i] += arr[i][1] + max;
		}
	}
	int max = sum[0];
	for (int i = 1; i < n; i++) {
		if (max < sum[i]) max = sum[i];
	}
	cout << max;
}
