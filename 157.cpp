#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int n;cin >> n;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n-i-1;j++) {
			cout << "~";
		}
		
		for (int j = 0;j <= 2*i;j++) {
			if (j == 0 or i == n-1 or j == 2*i) cout << "*";
			else cout << ".";
		}
		cout << "\n";
	}
	return 0;
}
