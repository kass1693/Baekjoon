#include<iostream>
#include<string.h>
#include<string>
#include<vector>

using namespace std;

bool arr[301][301];
int cnt[301][301];
int c[8][2] = { {1,2}, {2,1}, {-1,2}, {-2,1}, {-1,-2}, {-2, -1}, {1, -2}, {2, -1} };
int a, b, l;

void bfs(int x, int y) {
	arr[y][x] = true;

	vector<int> tmpX, tmpY;
	tmpX.push_back(x);
	tmpY.push_back(y);

	while (tmpX.size() > 0) {
		for (int i = 0; i < 8; i++) {
			if (!(arr[tmpY[0] + c[i][0]][tmpX[0] + c[i][1]]) && tmpY[0] + c[i][0] >= 0 && tmpY[0] + c[i][0] <= l - 1 && tmpX[0] + c[i][1] >= 0 && tmpX[0] + c[i][1] <= l - 1) {
				cnt[tmpY[0] + c[i][0]][tmpX[0] + c[i][1]] = cnt[tmpY[0]][tmpX[0]] + 1;
				arr[tmpY[0] + c[i][0]][tmpX[0] + c[i][1]] = true;
				tmpY.push_back(tmpY[0] + c[i][0]);
				tmpX.push_back(tmpX[0] + c[i][1]);
			}
		}
		tmpX.erase(tmpX.begin());
		tmpY.erase(tmpY.begin());
	}
	cout << cnt[b][a] << endl;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int x, y;
	short T;
	cin >> T;

	while (T--) {
		cin >> l >> x >> y >> a >> b;
		memset(&arr, 0, 301 * 301 * sizeof(bool));
		memset(&cnt, 0, 301 * 301 * sizeof(int));
		bfs(x, y);
	}
}
