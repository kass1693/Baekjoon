#include<iostream>

using namespace std;

int main() {
	int A, B;

	while (1) {
		cin >> A >> B;
		if (!A && !B)
			break;
		cout << A + B << endl;
	}
}
