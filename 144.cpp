#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int n;cin >> n;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (i == 0 or i == n-1 or j == 0 or j == n-1) cout << "*";
			else cout << ".";
		}
		cout << "\n";
	}
	return 0;
}
