#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	for (int i = 0;i < s1.length();i++) {
		if (s1[i] == s2[0]) {
			int pos = i;
			bool check = true;
			for (int j = 0;j < s2.length();j++) {
				if (s1[pos++] != s2[j]) {
					check = false;
					break;
				}
			}
			if (check) {
				s1.erase(i,s2.length());
			}
		}
	}
	
	while (s1[0] == ' ') {
		s1.erase(0,1);
	}
	
	for (int i = 1;i < s1.length();i++) {
		if (s1[i] == ' ' and s1[i+1] == ' '){
			s1.erase(i--,1);
		}
	}
	cout << s1;
	
	return 0;
}
