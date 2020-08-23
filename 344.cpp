#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

bool check(vector<string> &lst,string s) {
	for (int i = 0;i < lst.size();i++) {
		if (s == lst.at(i)) return false;
	}
	return true;
}

int main() {
	string inp;
	vector<string> lst;
	getline(cin,inp);
	string tm = "";
	for (int i = 0;i < inp.length();i++) {
		if (inp[i] == ' ') {
			if (check(lst,tm)) {
				lst.push_back(tm);
			}
			tm.clear();
		} else {
			tm += inp[i];
		}
	}
	
	if (check(lst,tm)) {
		lst.push_back(tm);
	}
	
	for (int i = 0;i < lst.size();i++) {
		cout << lst.at(i) << " ";
	}
	return 0;
}
