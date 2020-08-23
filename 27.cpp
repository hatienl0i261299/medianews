#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#define mx 100
#define null NULL
#define ll long long
using namespace std;
ll n;

void solve() {
	ll chan = 0,le = 0;
	while (n > 0) {
		ll tm = n % 10;
		if (tm % 2 == 0) {
			chan++;
		} else {
			le++;
		}
		n/=10;
	}
	cout << le << " " << chan;
}

int main() {
	cin >> n;
	solve();
	return 0;
}
