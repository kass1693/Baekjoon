#include<iostream>

using namespace std;

int main() {
	int ber[3];
	int berM = 2000;
	int dr[2];
	int drM = 2000;
	for (int i = 0; i < 3; i++) {
		cin >> ber[i];
		if (ber[i] < berM)
			berM = ber[i];
	}
	for (int i = 0; i < 2; i++) {
		cin >> dr[i];
		if (dr[i] < drM)
			drM = dr[i];
	}
	printf("%d", berM + drM - 50);
}
