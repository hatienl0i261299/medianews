#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int n,x,c;cin >> n;
	for (int i = 1;i <= n;i++) {
		if (i % 2 != 0) {
			c = 1;
			x = 1;
		} else {
			c = i;
			x = -1;
		}
		for (int j = 1;j <= i;j++) {
			cout << c;
			c+=x;
		}
		cout << "\n";
	}
	return 0;
}
