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

	string n;
	cin >> n;
	sort(n.begin(), n.end(), greater<char>());
	cout << n;
}

