#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <algorithm>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

void solve() {
	int a,b,c;cin >> a >> b >> c;
	if (a < 0 or b < 0 or c < 2) {
		cout << 0;
		return;
	}
	if (a + b + c == 180) {
		cout << 1;
	} else cout << 0;
}

int main() {
	solve();
	return 0;
}
