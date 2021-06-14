#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>

using namespace std;

int main() {
	int n, m;
	int ar[50][2];
	int frontMin, frontMinI = 0;
	int rearMin, rearMinI = 0;
	int count = 0;
	int money;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < 2; j++) {
			scanf("%d", &ar[i][j]);
		}
		if (i == 0) {
			frontMin = ar[i][0];
			rearMin = ar[i][1];
		}
		else {
			if (ar[i][0] < frontMin) {
				frontMin = ar[i][0];
				frontMinI = i;
			}
			if (ar[i][1] < rearMin) {
				rearMin = ar[i][1];
				rearMinI = i;
			}
		}
	}
	int temp = n;
	while (temp >= 6) {
		temp = temp - 6;
		count++;
	}
	if (ar[frontMinI][0] < (ar[rearMinI][1] * 6))
		money = count*ar[frontMinI][0];
	else
		money = count*(ar[rearMinI][1] * 6);

	if (ar[frontMinI][0] < (ar[rearMinI][1] * temp))
		money += ar[frontMinI][0];
	else
		money += (ar[rearMinI][1] * temp);
	printf("%d", money);
}
