#include<iostream>

using namespace std;

int arr[1000001];

int main() {
	int n;

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int max = arr[0];
	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (max < arr[i])
			max = arr[i];
		if (min > arr[i])
			min = arr[i];
	}
	printf("%d %d", min, max);
}
