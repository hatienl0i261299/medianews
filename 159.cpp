#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int n;cin >> n;
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= 2*n;j++) {
			if (j <= i-1) cout << "~";
			else if (j <= 2*n - i) cout << "*";
		}
		cout << "\n";
	}
	return 0;
}
