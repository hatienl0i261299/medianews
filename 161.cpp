#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int n;cin >> n;
	for (int i = 0;i < 2*n;i++) {
		if (i < n) {
			for (int j = 0;j <= i;j++) {
				cout << "*";
			}
		}  else if (i > n) {
			for (int j = 0;j < 2*n-i;j++) {
				cout << "*";
			}
		}
		if (i != n) cout << "\n";
	}
	return 0;
}
