#include<iostream>

using namespace std;

int main() {
	int n;
	char c[4];

	cin >> n >> c;

	printf("%d\n", (c[2]-48) * n);
	printf("%d\n", (c[1] - 48) * n);
	printf("%d\n", (c[0] - 48) * n);
	printf("%d\n", atoi(c) * n);
}
