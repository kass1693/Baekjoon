#include<iostream>
#include<string.h>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str1, str2;

	cin >> str1 >> str2;

	for (int i = 0; i < str1.length(); i++) {
		if (str2[i] == 'h') {
			cout << "go";
			return 0;
		}
	}
	cout << "no";
}

