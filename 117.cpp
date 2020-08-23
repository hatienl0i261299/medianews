#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int n;cin >> n;
	int res = 1;
	while (n) {
		res *= n % 10;
		n /= 10;
	}
	cout << res;
	return 0;
}
