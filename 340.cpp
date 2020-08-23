#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;
int n,a[mx][mx];
void init() {
	cin >> n;
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= n;j++) {
			cin >> a[i][j];
		}
	}
}

void swap(int &x,int &y) {
	int tm = x;
	x = y;
	y = tm;
}

void solve() {
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= i;j++ ) {
			if (i == j) {
				swap(a[i][j],a[i][n-j+1]);
			}
		}
	}
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= n;j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}

int main() {
	init();solve();
	return 0;
}
