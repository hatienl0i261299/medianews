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
	if (a == b) {
		if (b == c) {
			cout << 3;
		} else {
			cout << 2;
		}
	} else {
		if (b == c) {
			cout << 2;
		} else {
			cout << 1;
		}
	}
}

int main() {
	solve();
	return 0;
}
