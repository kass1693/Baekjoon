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
	
	multimap<short, string> m;
	int n;
	cin >> n;
	short age;
	string name;

	while (n--) {
		cin >> age >> name;
		m.insert(make_pair(age, name));
	}

	for (auto i = m.begin(); i != m.end(); i++) {
		cout << i->first << " " << i->second << "\n";
	}

}

