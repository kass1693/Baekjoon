#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
/*첫째 줄에 보드의 크기 N이 주어진다. (3 ≤ N ≤ 50)

다음 N개 줄에는 보드에 채워져 있는 사탕의 색상이 주어진다. 빨간색은 C, 파란색은 P, 초록색은 Z, 노란색은 Y로 주어진다.
*/

void swap(char *a, char *b) {
	char temp = *a;
	*a = *b;
	*b = temp;
}

int max(int arr[], int n) {
	int max = arr[0];
	for (int i = 1; i < n; i++)
		if (max < arr[i])
			max = arr[i];
	return max;
}

int main() {
	int N;
	char ar[51][51];
	scanf("%d", &N);
	vector<int> count1;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			scanf(" %c", &ar[i][j]);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			int n ;
			int m;
			int count[8] = { 0 };
			//위
			if (i - 1 >= 0) {
				n = i - 1;
				m = j;
				swap(&ar[i][j], &ar[i - 1][j]);
				while (ar[n][m] == ar[n - 1][m]) {//위
					count[0]++;
					n--;
				}
				n = i - 1;
				m = j;
				while (ar[n][m] == ar[n + 1][m]) {//아래
					count[0]++;
					n++;
				}
				n = i - 1;
				m = j;
				while (ar[n][m] == ar[n][m - 1]) {//왼
					count[1]++;
					m--;
				}
				n = i - 1;
				m = j;
				while (ar[n][m] == ar[n][m + 1]) {//오른쪽
					count[1]++;
					m++;
				}
				swap(&ar[i][j], &ar[i - 1][j]);
			}
			//아래
			if (i + 1 <= N-1) {
				n = i + 1;
				m = j;
				swap(&ar[i][j], &ar[i + 1][j]);
				while (ar[n][m] == ar[n - 1][m]) {//위
					count[2]++;
					n--;
				}
				n = i + 1;
				m = j;
				while (ar[n][m] == ar[n + 1][m]) {//아래
					count[2]++;
					n++;
				}
				n = i + 1;
				m = j;
				while (ar[n][m] == ar[n][m - 1]) {//왼
					count[3]++;
					m--;
				}
				n = i + 1;
				m = j;
				while (ar[n][m] == ar[n][m + 1]) {//오른쪽
					count[3]++;
					m++;
				}
				swap(&ar[i][j], &ar[i + 1][j]);
			}

			if (j - 1 >= 0) {
				//왼쪽
				swap(&ar[i][j], &ar[i][j - 1]);
				n = i;
				m = j - 1;
				while (ar[n][m] == ar[n - 1][m]) {//위
					count[4]++;
					n--;
				}
				n = i;
				m = j - 1;
				while (ar[n][m] == ar[n + 1][m]) {//아래
					count[4]++;
					n++;
				}
				n = i;
				m = j - 1;
				while (ar[n][m] == ar[n][m - 1]) {//왼
					count[5]++;
					m--;
				}
				n = i;
				m = j - 1;
				while (ar[n][m] == ar[n][m + 1]) {//오른쪽
					count[5]++;
					m++;
				}
				swap(&ar[i][j], &ar[i][j-1]);
				count1.push_back(max(count, 4));
			}

			if (j + 1 <= N-1) {
				//오른쪽
				swap(&ar[i][j], &ar[i][j + 1]);
				n = i;
				m = j + 1;
				while (ar[n][m] == ar[n - 1][m]) {//위
					count[6]++;
					n--;
				}
				n = i;
				m = j + 1;
				while (ar[n][m] == ar[n + 1][m]) {//아래
					count[6]++;
					n++;
				}
				n = i;
				m = j + 1;
				while (ar[n][m] == ar[n][m - 1]) {//왼
					count[7]++;
					m--;
				}
				n = i;
				m = j + 1;
				while (ar[n][m] == ar[n][m + 1]) {//오른쪽
					count[7]++;
					m++;
				}
				swap(&ar[i][j], &ar[i][j + 1]);
				count1.push_back(max(count, 8));
			}
		}
	}
	sort(count1.begin(), count1.end());
	printf("%d", count1.back()+1);
}
