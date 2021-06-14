#include<iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	switch (n / 10) {
	case 10:
	case 9:
		printf("A"); break;
	case 8:
		printf("B"); break;
	case 7:
		printf("C"); break;
	case 6:
		printf("D"); break;
	default:
		printf("F"); break;
	}
}
