#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

void solve() {
	ll n;
	cin >> n;
	while (n > 0) {
		ll tm = n % 10;
		if (tm != 0 and tm != 6 and tm != 8) {
			cout << 0;
			return;
		}
		n /= 10;
	}
	cout << 1;
}

int main() {
	solve();
	return 0;
}
