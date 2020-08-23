#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int n;cin >> n;
	int s = 0;
	for (int i = 1;i < n;i++) {
		if (n % i == 0) {
			s += i;
		}
	}
	
	if (s == n) {
		cout << 1;
	} else cout << 0;
	return 0;
}
