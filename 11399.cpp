#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n, p[1000], sum = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> p[i];
	sort(p, p + n);
	for (int i = 0; i < n; i++) {
		int temp = 0;
		for (int j = 0; j <= i; j++) {
			temp += p[j];
		}
		sum += temp;
	}
	printf("%d", sum);
}
