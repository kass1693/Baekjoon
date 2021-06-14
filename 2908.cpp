#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	string str1, str2;

	cin >> str1 >> str2;
	reverse(str1.begin(), str1.end());
	reverse(str2.begin(), str2.end());

	int n1 = atoi(str1.c_str());
	int n2 = atoi(str2.c_str());
	if (n1 > n2)
		printf("%d", n1);
	else
		printf("%d", n2);
}
