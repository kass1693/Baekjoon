#include<iostream>
#include<string.h>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>
#include <map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<string, bool, greater<string>> m;
	int n;
	string str1, str2;
	cin >> n;
	while (n--) {
		cin >> str1 >> str2;
		if (str2 == "enter") {
			m.insert(make_pair(str1, true));
			m[str1] = true;
		}
		else {
			m[str1] = false;
		}	
	}
	for (auto i = m.begin(); i != m.end(); i++) {
		if (i->second)
			cout << i->first << "\n";
	}
}

