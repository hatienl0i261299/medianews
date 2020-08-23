#include <bits/stdc++.h>
using namespace std;

vector<string> init(string s)  {
	vector<string> str;
	string tmp  = "";
	for (int i = 0;i < s.length();i++) {
		if (s[i] == ' ') {
			if (s[i-1] != ' ') {
				str.push_back(tmp);
				tmp.clear();
			}
		} else {
			if (s[i] >= 'A' and s[i] <= 'Z') {
				tmp += (s[i] + 32);
			} else {
				tmp += s[i];
			}
		}
	}
	str.push_back(tmp);
	return str;
}

void solve(string s) {
	vector<string> arr = init(s);
	for (int i = 0;i < arr.size();i++) {
		int c = 1;
		for (int j = i+1;j < arr.size();j++)  {
			if (arr.at(i) == arr.at(j)) {
				c++;
				arr.erase(arr.begin() + j);
				j--;
			}
		}
		cout << arr.at(i) << " " << c << "\n";
	}
}

int main() {
	string s;
	getline(cin,s);
	solve(s);
	return 0;
}
