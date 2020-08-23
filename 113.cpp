#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int n;cin >> n;
	int ans = 0;
	while (n) {
		ans++;
		n/=10;
	}
	cout << ans;
	return 0;
}
