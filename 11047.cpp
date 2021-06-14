#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int n, k, a, cnt = 0;
	vector<int> v;

	scanf("%d %d", &n, &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		v.push_back(a);
	}
	reverse(v.begin(), v.end());

	for (int i = 0; k; i++) {
		if (k >= v[i]) {
			cnt = cnt + k / v[i];
			k = k % v[i];
		}
	}
	printf("%d", cnt);
}
