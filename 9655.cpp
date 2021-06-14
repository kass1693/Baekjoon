#include<iostream>
#include<string.h>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, cnt = 0;
	cin >> n;

	if (n % 2 != 0) 
		cout << "SK";
	else
		cout << "CY";
}
