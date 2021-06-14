#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
	char c;
	int a;
	cin >> a;
	int sum = 0;
	getchar();
	for (int i = 0; i < a; i++) {
		cin >> c;
		sum += c - 48;
	}
		

	printf("%d", sum);
}
