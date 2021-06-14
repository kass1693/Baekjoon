#include<iostream>

using namespace std;

int a(string s) {
	int result = 0;
	string tmp;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '+') {
			result += atoi(tmp.c_str());
			tmp = "";
		}
		else {
			tmp += s[i];
		}
	}
	result += atoi(tmp.c_str());
	return result;
}

int main() {
	string str, tmp;
	int front=0, result=0;
	cin >> str;

	
	str.insert(str.begin(),'(');
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '-') {
			str.insert(str.begin() + i, ')');
			str.insert(str.begin() + i + 2, '(');
			i++;
		}
	}
	str.insert(str.end(), ')');
	int i = 0;
	for (; i < str.length(); i++) {
		if (str[i] == ')') {
			tmp = str.substr(1, i);
			result += a(tmp);
			i++;
			break;
		}
	}

	for (; i < str.length(); i++) {
		if (str[i] == '(') {
			front = i + 1;
			continue;
		}
		if (str[i] == ')') {
			tmp = str.substr(front, i-front);
			result -= a(tmp);
		}
	}

	cout << result;
}
