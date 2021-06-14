#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int f(char s[][51], int n, int m) {
	char c ='B';
	int cnt = 0;
	int cnt2 = 0;
	for (int i = n; i < n + 8; i += 2) { //0 2 4 6 8
		for (int j = m; j < m + 8; j += 2) { //0 2 4 6 8
			if (s[i][j] != c)
				cnt++;
		}
		for (int j = m + 1; j < m + 8; j += 2) { //1 3 5 7 9
			if (s[i][j] == c)
				cnt++;
		}
	}
	
	for (int i = n + 1; i < n + 8; i += 2) { //1 3 5 7 9
		for (int j = m; j < m + 8; j += 2) { //0 2 4 6 8
			if (s[i][j] == c)
				cnt++;
		}
		for (int j = m + 1; j < m + 8; j += 2) { //1 3 5 7 9
			if (s[i][j] != c)
				cnt++;
		}
	}
	cnt2 = cnt;
	cnt = 0;
	c = 'W';
	for (int i = n; i < n + 8; i += 2) { //0 2 4 6 8
		for (int j = m; j < m + 8; j += 2) { //0 2 4 6 8
			if (s[i][j] != c)
				cnt++;
		}
		for (int j = m + 1; j < m + 8; j += 2) { //1 3 5 7 9
			if (s[i][j] == c)
				cnt++;
		}
	}

	for (int i = n + 1; i < n + 8; i += 2) { //1 3 5 7 9
		for (int j = m; j < m + 8; j += 2) { //0 2 4 6 8
			if (s[i][j] == c)
				cnt++;
		}
		for (int j = m + 1; j < m + 8; j += 2) { //1 3 5 7 9
			if (s[i][j] != c)
				cnt++;
		}
	}
	if (cnt2 > cnt)
		return cnt;
	return cnt2;
}

int main() {
	int n, m, cnt = 0, cntmp = 10000;
	char s[51][51] = { 0 };
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%s", s[i]);
	}

	for (int i = 0; i < n - 7; i++) {
		for (int j = 0; j < m - 7; j++) {
			cnt = f(s, i, j);
			if (cntmp > cnt)
				cntmp = cnt;

		}
	}
	printf("%d", cntmp);
}
