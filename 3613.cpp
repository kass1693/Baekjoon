#include<iostream>
#include<string>

using namespace std;

int main() {
	string s;
	cin >> s;
	if (s[0] >= 'A' && s[0] <= 'Z' || s[0] == '_' || s[s.length()-1] == '_') {
		cout << "Error!";
		return 0;
	}
	for (int i = 0; i < s.length(); i++) {
		if ((!(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i] == '_'))) {
			cout << "Error!";
			return 0;
		}
	}

	if (s.find('_') == string::npos) { // java
		for (int i = 0; i < s.length(); i++) {
			if (s[i] >= 'A' && s[i] <= 'Z') {
				s[i] += 32;
				s.insert(s.begin() + i, '_');
			}
		}
		cout << s;
	}
	else { // c++
		for (int i = 0; i < s.length(); i++) {
			if (s[i] >= 'A' && s[i] <= 'Z') {
				cout << "Error!";
				return 0;
			}
			if (s[i] == '_') {
				s.erase(s.begin() + i);
				if (!(s[i] >= 'a' && s[i] <= 'z')) {
					cout << "Error!";
					return 0;
				}
				s[i] -= 32;

			}
		}
		cout << s;
	}
}
