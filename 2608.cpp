#include<iostream>
#include<string.h>
#include<string>
#include<vector>

using namespace std;



int main() {
	string str1, str2;
	int sum1 = 0, sum2 = 0;
	string s[6] = { "IV", "IX", "XL", "XC", "CD","CM" };
	char c[7] = { 'M','D','C','L','X','V','I' };
	int a[13] = { 4,9,40,90,400,900,1000,500,100,50,10,5,1 };
	cin >> str1 >> str2;

	for (int i = 0; i < str1.length(); i++) {
		int j = 0;
		bool flag = true;
		for (; j < 6; j++) {
			if (!str1.substr(i, 2).compare(s[j])) {
				sum1 += a[j];
				i++;
				flag = false;
			}
		}
		for (j = 0; j < 7 && flag; j++) {
			if (str1[i] == c[j]) {
				sum1 += a[j + 6];
				break;
			}
		}
	
	}

	for (int i = 0; i<str2.length(); i++) {
		int j = 0;
		bool flag = true;
		for (; j < 6; j++) {
			if (!str2.substr(i, 2).compare(s[j])) {
				sum2 += a[j];
				i++;
				flag = false;
			}
		}
		for (j = 0; j < 7 && flag; j++) {
			if (str2[i] == c[j]) {
				sum2 += a[j + 6];
				break;
			}
		}
	
	}
	int sum = sum1 + sum2;
	cout << sum << endl;
	string str;
	while (sum) {
		if (sum >= 1000) {
			str += "M";
			sum -= 1000;
			continue;
		}
		if (sum >= 900) {
			str += "CM";
			sum -= 900;
			continue;
		}
		if (sum >= 500) {
			str += "D";
			sum -= 500;
			continue;
		}
		if (sum >= 400) {
			str += "CD";
			sum -= 400;
			continue;
		}
		if (sum >= 100) {
			str += "C";
			sum -= 100;
			continue;
		}
		if (sum >= 90) {
			str += "XC";
			sum -= 90;
			continue;
		}
		if (sum >= 50) {
			str += "L";
			sum -= 50;
			continue;
		}
		if (sum >= 40) {
			str += "XL";
			sum -= 40;
			continue;
		}
		if (sum >= 10) {
			str += "X";
			sum -= 10;
			continue;
		}
		if (sum >= 9) {
			str += "IX";
			sum -= 9;
			continue;
		}
		if (sum >= 5) {
			str += "V";
			sum -= 5;
			continue;
		}
		if (sum >= 4) {
			str += "IV";
			sum -= 4;
			continue;
		}
		if (sum >= 1) {
			str += "I";
			sum -= 1;
			continue;
		}
	}
	cout<< str << endl;
}
