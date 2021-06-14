#include<iostream>
#include<vector>
#include<stdio.h>

using namespace std;

int main() {
	char str[400000];
	vector<int> oct;
	vector<int> num;
	cin >> str;

	for (int i = 0; str[i] != '\0'; i++) {
		num.push_back(str[i] - 48);
	}

	for (unsigned int i = 0; i < num.size(); i++) {
		if (num[i] >= 4) {
			oct.push_back(1);
			num[i] = num[i] % 4;
		}
		else
			oct.push_back(0);
		if (num[i] >= 2) {
			oct.push_back(1);
			num[i] = num[i] % 2;
		}
		else
			oct.push_back(0);
		oct.push_back(num[i]);
	}
	while (oct.front() == 0 && oct.size()>1)
		oct.erase(oct.begin());

	for (unsigned int i = 0; i < oct.size(); i++) {
		printf("%d", oct[i]);
	}
}
