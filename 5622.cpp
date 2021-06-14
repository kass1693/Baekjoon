#include<iostream>

using namespace std;

int main() {
	int time = 0;
	char c[16];
	scanf("%s", c);
	for (int i = 0; c[i]; i++) {
		if ('A' <= c[i] && 'C' >= c[i])
			time += 3;
		else if ('D' <= c[i] && 'F' >= c[i])
			time += 4;
		else if ('G' <= c[i] && 'I' >= c[i])
			time += 5;
		else if ('J' <= c[i] && 'L' >= c[i])
			time += 6;
		else if ('M' <= c[i] && 'O' >= c[i])
			time += 7;
		else if ('P' <= c[i] && 'S' >= c[i])
			time += 8;
		else if ('T' <= c[i] && 'V' >= c[i])
			time += 9;
		else if ('W' <= c[i] && 'Z' >= c[i])
			time += 10;
	}

	printf("%d", time);
}
