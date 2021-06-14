#include<iostream>
#include<string.h>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int main() {
	int n, tmp;
	vector<int> v;
	scanf("%d", &n);
	while (n--) {
		scanf("%d",&tmp);
		v.push_back(tmp);
	}
	sort(v.begin(), v.end(),greater<int>());
	tmp = v[0];
	for (int i = 1; i < v.size(); i++) {
		if (tmp <= v[i] * (i + 1)) {
			tmp = v[i] * (i + 1);
		}
	}
	printf("%d", tmp);
}
