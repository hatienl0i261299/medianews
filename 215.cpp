#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int n,c;cin >> n;
	for (int i = 1;i <=n;i++) {
		int c = 2*i-1;
		for (int j = 1;j <= n-i+1;j++) {
			cout << c;
			c+=2;
		}
		cout << "\n";
	}
	return 0;
}
