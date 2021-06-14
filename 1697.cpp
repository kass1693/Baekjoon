#include<iostream>
#include<string.h>
#include<string>
#include<vector>
#include<queue>

using namespace std;
bool b[100001];
int i[100001];
int n, k, cnt;

bool a(int c) {
	if (c >= 0 && c <= 100001 && !b[c])
		return true;
	return false;
}

int main() {
	queue<int> q;
	cin >> n >> k;
	if (n == k) {
		cout << 0;
		return 0;
	}
		
	q.push(n);
	b[n] = true;
	i[n] = 0;
	while (!q.empty()) {
		int tmp = q.front();
		q.pop();
		if (a(tmp + 1)) {
			if (tmp + 1 == k) {
				cout << i[tmp] + 1;
				return 0;
			}
			b[tmp + 1] = true;
			i[tmp + 1] = i[tmp] + 1;
			q.push(tmp + 1);
		}
		if (a(tmp - 1)) {
			if (tmp - 1 == k) {
				cout << i[tmp] + 1;
				return 0;
			}
			b[tmp - 1] = true;
			i[tmp - 1] = i[tmp] + 1;
			q.push(tmp - 1);
		}
		if (a(tmp * 2)) {
			if (tmp * 2 == k) {
				cout << i[tmp] + 1;
				return 0;
			}
			b[tmp * 2] = true;
			i[tmp * 2] = i[tmp] + 1;
			q.push(tmp * 2);
		}
	}
}
