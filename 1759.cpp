#include<iostream>
#include<string.h>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;
string str;
string s;
short l, c;
void dfs(string strr, short n) {
	if (n > c) return;
	if (strr.length() == l) {
		int mo = 0, ja = 0;
		for (int i = 0; i < l; i++) {
			if (strr[i] == 'a' || strr[i] == 'e' || strr[i] == 'i' || strr[i] == 'o' || strr[i] == 'u')
				mo++;
			else
				ja++;
		}
		if(mo>=1 && ja>=2)
			cout << strr << endl;
		return;
	}
	dfs(strr+str[n], n + 1);
	dfs(strr, n + 1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	
	cin >> l >> c;

	for (int i = 0; i < c; i++) {
		cin >> s;
		str += s;
	}
	s = "";
	sort(str.begin(), str.end());
	dfs(s, 0);
}
//1개 이상 모음
//2개 이상 자음
