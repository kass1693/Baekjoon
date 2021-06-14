#include<iostream>
#include<math.h>

int main() {
	int a, b, v;
	scanf("%d %d %d", &a, &b, &v);
	v -= a;
	printf("%d", (int)(ceil((double)v / ((double)a - b))) + 1);
}
