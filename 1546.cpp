#include<iostream>

using namespace std;

int main() {
	double arr[1001];
	int n;
	double max = 0;
	double sum = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (max < arr[i])
			max = arr[i];
	}
	for (int i = 0; i < n; i++) {
		arr[i] = arr[i] / max * 100;
		sum += arr[i];
	}
	printf("%.2lf", sum / n);
}
