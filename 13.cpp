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

void init(){
	cin >> n;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cin >> a[i][j];
		}
	}
}

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

void solve() {
	ll s = 0;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (i >= j) {
				if (nguyen_to(a[i][j])) {
					s+=a[i][j];
				}
			}
		}
	}
	cout << s;
}

int main() {
	init();
	solve();
	return 0;
}
