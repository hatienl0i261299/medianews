#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int gt(int n) {
	int res = 1;
	for (int i = 1;i <= n;i++) {
		res *= i;
	}
	return res;
}

int main() {
	int n,s = 0;cin >> n;
	int a = n;
	while (n) {
		int tm = n % 10;
		s += gt(tm);
		n/=10;
	}
	if (s == a) {
		cout << 1;
	} else cout << 0; return 0;
}
