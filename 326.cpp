#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

bool nt(int n) {
	if (n < 2) return false;
	for (int i = 2;i <= sqrt(n);i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	int n,s = 0,tm;
	cin >> n;
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= n;j++) {
			cin >> tm;
			if (j <= i and nt(tm))  {
				s += tm;
			}
		}
	}
	cout << s;
	return 0;
}
