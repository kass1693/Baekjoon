#include<iostream>
#include<vector>

using namespace std;

int main() {
	int count;
	bool boolean = false;
	cin >> count;
	int num;
	int c = 0;
	for (int i = 0; i < count; i++) {
		cin >> num;
		for (int k = 2; k <= 64; k++) { //판단
			int num1 = num;
			vector<int> v;
			vector<int> a;
			
			while (num1 != 0) { //진법 변환
				v.push_back(num1 % k);
				num1 = num1 / k;
			}

			for (int j = 0; j < v.size(); j++) { //회전
				a.insert(a.begin(), v[j]);
			}
			for (int j = 0; j < a.size(); j++) { //원소 값 비교
				if (a[j] != v[j]) { //원소 값 다르면 카운트 +1
					c++;
					break;
				}
			}
			if (c == 0) { //원소 값 다른 것이 하나도 없다면
				boolean = true;
				break;
			}
			c = 0;
		}

		if (boolean == true)
			cout << "1" << endl;
		else
			cout << "0" << endl;;
		boolean = false;


	}
}
