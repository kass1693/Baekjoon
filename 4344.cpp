#include<iostream>

using namespace std;

int main() {
	int c, n;
	int arr[1001];
	int sum = 0;
	double avg;
	int cnt = 0;

	cin >> c;
	while (c--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
			sum += arr[i];
		}
		avg = (double)sum / n;
		for (int i = 0; i < n; i++) {
			if (avg < arr[i])
				cnt++;
		}
		printf("%.3lf%%\n", (double)cnt / n * 100);
		cnt = 0; sum = 0;
	}
}
