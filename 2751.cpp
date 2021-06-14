#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int a[1000000];
int main() {
	
	int n, m;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		a[i] = m;
	}
	sort(&a[0], &a[n]);
	for (int i = 0; i < n; i++) {
		printf("%d\n", a[i]);
	}
}
