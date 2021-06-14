#include<iostream>

int main() {
	int n, sum = 0, tmp = 1, temp;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		temp = sum;
		sum += tmp;
		tmp = temp;
		
	}
	printf("%d\n", sum);
}
