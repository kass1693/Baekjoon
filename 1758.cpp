#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include <functional>

using namespace std;

int main() {
	int n, m, x;
	long sum = 0;
	scanf("%d", &n);
	vector<int> a;
	while(n--) {
		scanf("%d", &x);
		a.push_back(x);
	}
	sort(a.begin(), a.end(), greater<int>());
	for (int i = 0; i < a.size(); i++) {
		m = a[i] - i;
		if (m > 0)
			sum += m;
	}
	printf("%ld\n", sum);
}
