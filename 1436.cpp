#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int f(char* str) {
	for (int i = 0; str[i]; i++) {
		if (str[i] == '6' && str[i + 1] == '6' && str[i + 2] == '6')
			return 1;
	}
	return 0;
}

int main() {
	int n, cnt = 1, i;
	char str[1000];
	scanf("%d",&n);
	if (n == 1) {
		printf("666");
		return 0;
	}
	for (i = 1666; n != cnt; i++) {
		sprintf(str, "%d", i);
		if (f(str)) {
			cnt++;
		}
	}
	printf("%d", i - 1);
}
