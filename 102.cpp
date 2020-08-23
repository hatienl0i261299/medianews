#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <iomanip>
#define null NULL
#define ll long long
using namespace std;

void solve() {
	ll a,b,c;
	cin >> a >> b >> c;
	ll mx = a;
	if (b > mx) {
		mx = b;
	}
	if (c > mx) {
		mx = c;
	}
	cout << mx;
}

int main() {
	solve();
	return 0;
}
