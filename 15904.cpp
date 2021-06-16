#include<iostream>
#include<string.h>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>
#include <map>

using namespace std;
bool b[4];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string str;
	//cin >> str;
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'U')
			b[0] = true;
		else if (str[i] == 'C' && b[0] && !b[1])
			b[1] = true;
		else if (str[i] == 'P' && b[1])
			b[2] = true;
		else if (str[i] == 'C' && b[2]) {
			cout << "I love UCPC";
			return 0;
		}
	}
	cout << "I hate UCPC";
}

