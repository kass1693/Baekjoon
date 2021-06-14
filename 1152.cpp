#include<iostream>
#include<string.h>

using namespace std;

char c[1000001];
int cnt;
int main() {
	cin.getline(c, 1000001);
	if (c[0] == ' ')
		cnt--;
	for (int i = 0;; i++) {
		if (c[i] == ' ')
			cnt++;
		else if (c[i] == '\0') {
			if (c[i - 1] == ' ')
				cnt--;
			break;
		}
	}
	printf("%d", cnt+1);
}
