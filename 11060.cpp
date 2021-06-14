#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int main() {
	int i = 0;
	int n;
	int a[1001];
	int max, maxIndex = 0;
	int count = 1;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	i = 0;

	if (n == 1) {
		printf("0\n");
		return 0;
	}

	while (i + 1 < n) {
		for (int j = i, k = 0; k <= a[i]; j++, k++) {
			int sum = j + a[j];
			if (max < sum) {
				max = sum;
				maxIndex = j;
			}
		}
		if (a[0] >= n - 1)
			break;
		count++;
		i = maxIndex;
		if (n - a[maxIndex] - maxIndex <= 1)
			break;
		if (n - 1 == i)
			count--;
		else if (count > n || a[maxIndex] == 0) {
			printf("-1\n");
			return 0;
		}

		maxIndex = -1;
		max = -1;

	}
	printf("%d\n", count);
}
