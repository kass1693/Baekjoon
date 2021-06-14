#include<iostream>
#include<queue>

using namespace std;

int main(){
	priority_queue<int> q;
	int n;
	int x;

	scanf("%d", &n);
	while (n--) {
		scanf("%d", &x);
		if (x == 0) {
			if (q.empty())
				printf("0\n");
			else {
				printf("%d\n", q.top());
				q.pop();
			}
			continue;
		}
		q.push(x);
	}
}
