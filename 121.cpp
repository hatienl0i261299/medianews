#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;


int main() {
	int n;cin >> n;
	for (int i = 1;i <= n;i++) {
		if (n%i == 0) cout << i << " ";
	}
	return 0;
}
