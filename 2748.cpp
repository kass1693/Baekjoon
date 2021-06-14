#include<iostream>

int main() {
	int n;
	long long sum = 0, tmp = 1, temp;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		temp = sum;
		sum += tmp;
		tmp = temp;
		
	}
	printf("%lld\n", sum);
}
