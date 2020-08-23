#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int n,s,a[mx][mx];
	cin >> n;
	for (int i = 0;i < n;i++) {
		s = 0;
		for (int j = 0;j < n;j++) {
			cin >> a[i][j];
			s += a[i][j];
		}
		cout << s << " ";
	}
	cout << "\n";
	for (int i = 0;i < n;i++) {
		s = 0;
		for (int j = 0;j< n;j++) {
			s += a[j][i];
		}
		cout << s << " ";
	}
	
	return 0;
}
