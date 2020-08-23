#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int n,tm,s1 = 0,s2 = 0;
	cin >> n;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cin >> tm;
			if (j > i) s1 += tm;
			else if (j < i) s2 += tm;
		}
	}
	cout << s1 << " " << s2;
	return 0;
}
