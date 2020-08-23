#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	string s,res = "";
	getline(cin,s);
	for (int i = 0;i < s.length();i++) {
		if (s[i] >= 'a' and s[i] <= 'z') {
			res += s[i] - 32;
		} else {
			res += s[i];
		}
	}
	cout << res;
}
