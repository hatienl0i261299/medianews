#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int n,tm,a[mx],b[mx] = {0};
	cin >> n;
	for (int i = 1;i <= n;i++) {
		cin >> a[i];
		b[a[i]]++;
	}
	for (int i = 1;i <= n;i++) {
		if (b[a[i]] != -9999) {
			cout << a[i] << " " << b[a[i]] << "\n";
			b[a[i]] = -9999;
		}
	}
	return 0;
}
