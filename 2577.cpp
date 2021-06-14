#include<iostream>

using namespace std;

int main() {
	int a, b, c;
	int arr[10] = { 0 };
	cin >> a >> b >> c;
	int n = a * b * c;
	
	while (n) {
		arr[n % 10]++;
		n /= 10;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
}
