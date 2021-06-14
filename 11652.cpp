#include<iostream>
#include<map>

using namespace std;

int main() {
	map<long long, int> m;
	long long integer;
	int n;

	scanf("%d", &n);

	while (n--) {
		scanf("%lld", &integer);
		if (m.count(integer) == 0)
			m[integer] = 1;
		else
			m[integer] += 1;
	}

	int max = m.begin()->second;
	long long key = m.begin()->first;

	map<long long, int> ::iterator it;
	for (it = m.begin(); it != m.end(); it++) {
		if (max < it->second) {
			max = it->second;
			key = it->first;
		}
	}

	printf("%lld", key);
}
