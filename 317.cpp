#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int n,a[mx],b[mx] = {0},dem = 0;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
		b[a[i]]++;
	}
	for (int i = 0;i < n;i++) {
		if (b[a[i]] == 1) {
			dem++;
		}
	}
	cout << dem << "\n";
	for (int i = 0;i < n;i++) {
		if (b[a[i]] == 1) {
			cout << a[i] << " ";
		}
	}
	return 0;
}
