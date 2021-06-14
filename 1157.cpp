#include<iostream>
#include<string.h>

using namespace std;

char c[1000001];
int cnt;
int temp;
int in;
int main() {
	cin>>c;
	int ar[26] = { 0 };
	
	for (int i = 0; c[i]; i++) {
		c[i] = tolower(c[i]);
		ar[c[i] - 97]++;
	}
	for (int i = 0; i < 26; i++) {
		if (temp < ar[i]) {
			temp = ar[i];
			in = i;
		}
	}
	temp;
	for (int i = 0; i < 26; i++) {
		if (temp == ar[i]) {
			cnt++;		
		}
	}
	if (cnt != 1)
		printf("?");
	else
		printf("%c", in + 65);
}
