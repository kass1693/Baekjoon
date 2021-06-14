#include<iostream>

using namespace std;

int main() {
	int h, m;

	cin >> h >> m;
	m -= 45;
	if (m >= 0)
		cout << h << " " << m;
	else if (m < 0) {
		h--;
		if (h >= 0)
			cout << h << " " << 60 + m;
		else{
			h = 23;
			cout << h << " " << 60 + m;
		}
	}
}
