#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int n;cin >> n;
	for (int i = 0;i < n*2-1;i++) {
		if (i == n-1) {
			for (int j = 0;j < n;j++) {
				cout << "*";
			}
		} else if (i < n) {
			for (int j = 0;j < n;j++) {
				if (j < n-i-1) {
					cout << "~";
				} else cout << "*";
			}
		} else {
			for (int j = 0;j < n;j++) {
				if (j+n <= i) {
					cout << "~";
				} else {
					cout << "*";
				}
			}
		}
		cout << "\n";
	}
	
	return 0;
}
