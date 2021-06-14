#include<iostream>
#include<queue>

using namespace std;

int main(){
	vector<int> v;
	int n, m;
	int sum=0, tmp, num;

	scanf("%d %d",&n, &m);

	for (int i = 0; i < n; i++) {
        scanf("%d",&num);
		v.push_back(num);
	}
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			for (int k = j+1; k < n; k++) {
				tmp = v[i] + v[j] + v[k];
				if (tmp <= m) {
					if(tmp > sum)
						sum = tmp;
				}
			}
		}
	}
	printf("%d", sum);
}
