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

	int n, m;
	cin >> n >> m;
	map<string, bool> ma, ma2;
	string str;
	
	for (int i = 0; i < n + m; i++) {
		cin >> str;
		if (!ma.insert(make_pair(str, true)).second)
			ma2.insert(make_pair(str, true));
	}
	cout << ma2.size() << "\n";
	for (auto i = ma2.begin(); i != ma2.end(); i++) {
		cout << i->first << "\n";
	}
	
}

