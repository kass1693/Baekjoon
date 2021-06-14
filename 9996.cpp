#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	int n;
	string str;
	string temp;
	scanf("%d", &n);
	cin >> str;

	while (n--) {
		int i;
		i = str.find('*');
		cin >> temp;
		string temp2 = temp;
		string temp3;
		string str1 = str.substr(0, i);
		string str2 = temp.substr(0, str.substr(0, i).length());
		string str3 = str.substr(i + 1, (str.length() - str.substr(0, i).length() - 1));
		std::reverse(temp2.begin(), temp2.end());
		temp3 = temp2.substr(0, str.substr(i + 1, (str.length() - str.substr(0, i).length() - 1)).length());
		std::reverse(temp3.begin(), temp3.end());

		if ((str1 == str2) && (str3 == temp3) && (str1.length() + str3.length())<=temp.length())
			printf("DA\n");
		else
			printf("NE\n");
	}
}
