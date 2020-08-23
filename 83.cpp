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

ll n,a[mx][mx];

void init() {
	cin >> n;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cin >> a[i][j];
		}
	}
}

void solve() {
	int sum = 99999999;
	int x;
	for (int i = 0;i < n;i++) {
		int tm = 0;
		for (int j = 0;j < n;j++) {
			tm += a[j][i];
		}
		if (tm < sum) {
			sum = tm;
			x = i;
		}
	}
	cout << x + 1 << endl;
	for (int i = 0;i < n;i++) {
		cout << a[i][x] << " ";
	}
}

int main() {
	init();
	solve();
	return 0;
}
