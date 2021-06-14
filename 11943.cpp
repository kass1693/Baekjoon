#include<stdio.h>

int main() {
	int a, b, c, d;
	scanf("%d %d",&a, &b);
	scanf("%d %d",&c, &d);
	if (a + d < b + c)
		printf("%d",a+d);
	else
		printf("%d",b+c);
}
