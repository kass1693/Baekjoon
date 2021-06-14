#include<iostream>
#include<string.h>

using namespace std;

int main() {
	char c1[9] = { '1','2','3','4','5','6','7','8' };
	char c2[9] = { '8','7','6','5','4','3','2','1' };
	char c3[9];
	for (int i = 0; i < 8; i++) {
		scanf("%c", &c3[i]);
		getchar();
	}
	c3[8] = '\0';
	if (!strcmp(c1, c3)) {
		printf("ascending");
	}
	else if (!strcmp(c2, c3)) {
		printf("descending");
	}
	else
		printf("mixed");
}
