#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

ll n,a[mx][mx],b[mx][mx];

void init() {
	cin >> n;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cin >> a[i][j];
		}
	}
}

void solve() {
	
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			b[j][i] = a[n-i-1][j];
		}
	}
	
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cout << b[i][j] << " ";
		}
		cout << "\n";
	}
}

int main() {
	init();
	solve();
	return 0;
}
