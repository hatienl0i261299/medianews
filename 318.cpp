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
	int n,a[mx][mx],dem = 0,last = 0;
	for (int i = 0;i <= 50;i++) {
		for (int j = 0;j <= 50;j++) {
			a[i][j] = INT_MAX;
		}
	}
	cin >> n;
	for (int i = 1;i <= n;i++) {
		int c = 0;
		for (int j = 1;j <= n;j++) {
			int tm;cin >> tm;
			if (nt(tm)) {
				c++;
				a[i][j] = tm;
			}
		}
		if (c > last) {
			dem = i;
			last = c;
		}
	}
	cout << dem << endl;
	for (int i = 1;i <= n;i++) {
		if (a[dem][i] != INT_MAX) cout << a[dem][i] << " ";
	}
	return 0;
}
