#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

unsigned long long fact(ll n) {
	return (n < 2) ? 1 : n*fact(n-1);
}

int main() {
	ll n;cin >> n;
	cout << fact(n);
	return 0;
}
