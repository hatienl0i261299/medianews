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
		for (int j = 0;j < n-i;j++) {
			cout << "*";
		}
		cout << "\n";
	}
	int m = n-1;
	for (int i = 0;i < m;i++) {
		for (int j = 0;j < 2*n;j++) {
			if (j < i+1) {
				cout << "~";
			} else if (j <= 2*i+2) {
				cout << "*";
			}
		}
		cout << "\n";
	}
	return 0;
}
