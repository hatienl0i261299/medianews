#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;
int main() {
	int n;cin >> n;
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= n-i+1;j++) {
			cout << "*";
		}
		
		for (int j = 1;j <= 2*n - 2*(n-i+1);j++) {
			cout << "~";
		}
		
		for (int j = 1;j <= n-i+1;j++) {
			cout << "*";
		}
		cout << "\n";
	}
	int m = n-1;
	for (int i = 1;i <= m;i++) {
		for (int j = 1;j <= i+1;j++) {
			cout << "*";
		}
		
		
		for (int j = 1;j <= 2*n - 2*(i+1);j++) {
			cout << "~";
		}
		
		for (int j = 1;j <= i+1;j++) {
			cout << "*";
		}
		
		cout << "\n";
	}
	
	return 0;
}
