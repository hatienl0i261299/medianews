#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

ll n,a[mx][mx];
bool nguyen_to(int num) {
	if (num < 2) {
		return false;
	}
	for (int i = 2;i <= sqrt(num);i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}

void init() {
	cin >> n;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cin >> a[i][j];
		}
	}
}

void solve() {
	int dem = 0;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (i == j || i+j == n-1 ) {
				if (nguyen_to(a[i][j])) {
					dem++;
				}
			}
		}
	}
	cout << dem;
}

int main() {
	init();
	solve();
	return 0;
}
