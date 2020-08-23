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
	ll a,b,c;cin >> a >> b >> c;
	if ( a % b == 0 and a % c == 0 ){
		cout << 1;
	} else cout << 0;
}

int main() {
	solve();
	return 0;
}
