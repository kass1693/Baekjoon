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
	string str1, str2, tmp;
	cin >> str1 >> str2;
	for (int i = 0; i < str1.length(); i++) {
		tmp += str1[i];
		if (str1[i] == str2[str2.length() - 1] && !tmp.empty()) {
			if (tmp.length() >= str2.length())
				if (tmp.substr(tmp.length() - str2.length(), str2.length() - 1) == str2.substr(0, str2.length() - 1)) {
					for (int j = 0; j < str2.length(); j++) {
						tmp.pop_back();
					}
					continue;
				}
		}

	}

	if (tmp.empty())
		cout << "FRULA";
	else
		cout << tmp;
}
