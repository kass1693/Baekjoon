#include<stdio.h>

int main() {
	int a;
	int cnt = 0;
	scanf("%d",&a);
	int tmp = a;
	
	while(1){
		a = (a%10 * 10)+((a/10 + a%10)%10);
		cnt++;
		if(a == tmp)
			break;
	}

	printf("%d", cnt);
}
