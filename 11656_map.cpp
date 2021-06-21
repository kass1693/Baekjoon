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

	string s;
	cin >> s;
	map<string, bool> m;

	for (int i = 0; i < s.length(); i++)
		m.insert(make_pair(s.substr(i), true));
	for (auto i = m.begin(); i != m.end(); i++)
		cout << i->first << "\n";
}

