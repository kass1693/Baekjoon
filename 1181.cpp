#include<iostream>
#include<string.h>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>
#include <map>

using namespace std;
bool compare(pair<string, int> a, pair<string, int> b) {
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	map<string, int> m;
	string str;
	for (int i = 0; i < n; i++) {
		cin >> str;
		m.insert(make_pair(str, str.length()));
	}
	vector<pair<string, int>> v(m.begin(), m.end());
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size(); i++)
		cout << v[i].first << "\n";
}

