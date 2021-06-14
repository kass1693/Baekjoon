#include<iostream>
#include<queue>

using namespace std;

bool arr[101][101];
bool c[101];
int n, m, cnt;

void bfs(int s) {
	queue<int> q;
	q.push(s);
	c[s] = 1;
	while (!q.empty()) {
		int a = q.front();
		q.pop();
		for (int i = 1; i <= n; i++) {
			if (arr[a][i] == 1 && !c[i]) {
				q.push(i);
				c[i] = 1;
				cnt++;
			}
		}
	}
}

int main() {
	int  a, b;
	scanf("%d %d", &n, &m);
	while (m--) {
		scanf("%d %d", &a, &b);
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	bfs(1);
	printf("%d", cnt);
}
