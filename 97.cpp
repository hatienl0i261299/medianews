#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

void solve() {
	ll n,m;
	cin >> n >> m;
	if (n <= 0 or m <= 0) {
		cout << 0;
	} else {
		cout << (n + m) * 2 << " " << n * m;
		
	}
}

int main() {
	solve();
	return 0;
}
