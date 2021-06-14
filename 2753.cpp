#include<iostream>

using namespace std;

int main() {
	int year;

	cin >> year;
	if (year >= 400)
		cout << ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)));
	else if (year >= 100)
		cout << ((year % 4 == 0) && (year % 100 != 0));
	else
		cout << (year % 4 == 0);
}
