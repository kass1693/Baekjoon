#include<iostream>

using namespace std;

int main() {
	int arr[9];
	int max;
	int index;
	for (int i = 0; i < 9; i++)
		cin >> arr[i];
	max = arr[0];
	index = 1;
	for (int i = 1; i < 9; i++) {
		if (max < arr[i]) {
			max = arr[i];
			index = i+1;
		}
	}
	printf("%d\n%d", max, index);
}
