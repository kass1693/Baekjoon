#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

void d(bool* ar, int n) {
	int temp = n;
	if (n > 10000)
		return;
	while (1) {
		n = n + (temp%10);
		temp /= 10;
		if (temp == 0)
			break;
	}
	ar[n] = true; //2자리까지만 판별가능함
	d(ar, n); //2자리까지만 판별 가능함
}

int main() {
	bool ar[30001] = { false };
	for(int i=1; i<=10000; i++)
		d(ar, i);
	for (int i = 1; i <= 10000; i++)
		if (ar[i] == false)
			printf("%d\n", i);
}
