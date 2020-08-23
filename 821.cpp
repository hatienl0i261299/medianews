#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

bool nguyen_to(int n) {
	if (n < 2) return false;
	for (int i = 2;i <= sqrt(n);i++)
		if (n%i==0) return false;
	return true;
}

int main() {
	int n,tm,s = 0;
	cin >> n;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cin >> tm;
			if (i == j or (i+j) == n-1) {
				if (nguyen_to(tm)) {
					s += tm;
				}
			}
		}
	}
	cout << s;
	return 0;
}
