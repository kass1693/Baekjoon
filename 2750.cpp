#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main() {
	int a[1000];
	int n, m;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		a[i] = m;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i] < a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", a[i]);
	}
}
