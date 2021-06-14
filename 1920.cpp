#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int n, m, x;
	vector<int> A, B;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &x);
		A.push_back(x);
	}
	sort(A.begin(), A.end());
	scanf("%d", &m);
	while (m--) {
		scanf("%d", &x);
		if (binary_search(A.begin(), A.end(), x))
			printf("1\n");
		else
			printf("0\n");
	}
}
