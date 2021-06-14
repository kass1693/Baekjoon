#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	short T;
	string p, x, tmp;
	int n;

	cin >> T;

	while (T--) {
		bool flag = true;
		int front = 0, rear = 0;
		cin >> p >> n >> x;
		vector<short> v;

		for (int i = 1; i < x.length(); i++) {
			if (x[i] >= '0' && x[i] <= '9') {
				tmp += x[i];
			}
			else {
				if (!tmp.empty()) {
					v.push_back(atoi(tmp.c_str()));
					rear++;
					tmp = "";
				}
			}
		}

		for (int i = 0; i < p.length(); i++) {
			if(p[i] == 'R'){
				int tmp = front;
				front = rear;
				rear = tmp;
			}
			else {
				if (front == rear) {
					cout << "error" << endl;
					flag = false;
					break;
				}
				if (front < rear) { // 정방향
					front++;
				}
				else { //역방향
					front--;
				}
			}
		}
		
		if (flag) {
			cout << "[";
			if (front < rear) {
				for (int i = front; i < rear; i++) {
					if (i == rear - 1)
						cout << v[i];
					else
						cout << v[i] << ',';
				}
			}
			else {
				for (int i = front-1; i >= rear; i--) {
					if (i == rear)
						cout << v[i];
					else
						cout << v[i] << ',';
				}
			}

			cout << "]" << endl;
		}
	}
}
