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

	short k;
	cin >> k;
	vector<vector<int>> v(2, vector<int>(k+1));
	//v[0] = A, v[1] = B
	v[0][0] = 1;
	v[1][0] = 0;


	v[0][1] = 0;
	v[1][1] = 1;

	for (int i = 2; i <= k; i++) {
		v[0][i] = v[0][i-1] + v[0][i-2];
		v[1][i] = v[1][i - 1] + v[1][i - 2];
	}

	cout << v[0][k] << " " << v[1][k];
	/*
	0 A
	1 B
	2 BA
	3 BAB
	4 BABBA
	5 BABBABAB
	*/
}
