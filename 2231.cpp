#include<iostream>

using namespace std;

int a(int n) {
	int sum = n;
	while (n) {
		sum += (n % 10);
		n /= 10;
	}
	return sum;
}

int main(){
	int n;
	scanf("%d",&n);
	for (int i = n/2; i < n; i++) {
		if (n == a(i)) {
			printf("%d", i);
			return 0;
		}
	}
	printf("0");
}
