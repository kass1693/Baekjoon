#include<iostream>
#include<queue>

using namespace std;

bool arr[1001][1001];
bool c[1001];
bool c2[1001];
int n, m, v;
void dfs(int s) {
	printf("%d ",s);
	c[s] = 1;
	for (int i = 1; i <= n; i++) {
		if (arr[s][i] == 1 && !c[i]) {
			dfs(i);
		}
	}
}
void bfs(int s) {
	queue<int> q;
	q.push(s);
	c2[s] = 1;
	printf("%d ", s);
	while (!q.empty()) {
		int a = q.front();
		q.pop();
		for (int i = 1; i <= n; i++) {
			if (arr[a][i] == 1 && !c2[i]) {
				q.push(i);
				c2[i] = 1;
				printf("%d ", i);
			}
		}
	}

	
}

int main() {
	int  a, b;
	scanf("%d %d %d", &n, &m, &v);
	while (m--) {
		scanf("%d %d", &a, &b);
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	dfs(v);
	printf("\n");
	bfs(v);
}
