#include<iostream>

using namespace std;

int main() {
	char c[101];
	int count = 0;
	scanf("%s", c);

	for (int i = 0; c[i]; i++) {
		count++;
		if (c[i] == '=') {
			if (c[i - 1] == 'c' || c[i - 1] == 'z' || c[i - 1] == 's' || c[i - 1] == 'z') {
				count--;
				if (c[i - 1] == 'z' && c[i - 2] == 'd')
					count--;
			}
		}
		if (c[i] == '-') {
			if (c[i - 1] == 'c' || c[i - 1] == 'd')
				count--;
		}
		if(c[i] == 'j') {
			if (c[i - 1] == 'l' || c[i - 1] == 'n')
				count--;
		}
	}
	printf("%d", count);
}
