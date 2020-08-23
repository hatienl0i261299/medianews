#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

ll n,m,p,a[mx],b[mx];

void init() {
	cin >> n >> m >> p;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	for (int j = 0;j < m;j++) {
		cin >> b[j];
	}
}

void hien_thi(ll a[],ll len) {
	for (int i = 0;i < len;i++) {
		cout << a[i] << " ";
	}
}

void solve() {
	if (p <= 0) {
		hien_thi(b,m);
		hien_thi(a,n);
	} else if (p >= n) {
		hien_thi(a,n);
		hien_thi(b,m);
	} else {
		for (int i = 0;i < p;i++) {
			cout << a[i] << " ";
		}
		for (int i = 0;i < m;i++) {
			cout << b[i] << " ";
		}
		for (int i = p;i < n;i++) {
			cout << a[i] << " ";
		}
	}
}

int main() {
	init();
	solve();
	return 0;
}
