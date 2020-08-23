#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#define mx 100
#define null NULL
#define ll long long
using namespace std;
ll n,a[mx];


void init() {
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
}


void sap_xep_chen(ll *a,ll &n) {
	ll x,j;
	for (int i = 1;i < n;i++) {
		x = a[i];
		j = i - 1;
		while (x < a[j] and j >= 0) {
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = x;
	}
}

void solve() {
	sap_xep_chen(a,n);
	ll m1,m2;
	ll min = 99999999;
	for (int i = 1;i < n;i++) {
		ll tm = a[i] - a[i-1];
		if (tm < 0) {
			tm = -tm;
		}
		if (tm < min) {
			if (a[i] < a[i-1])  {
				m1 = a[i];m2 = a[i-1];
			} else {
				m1 = a[i-1];m2 = a[i];
			}
			min = tm;
		}
	}
	cout << min << " " << m1 << " " << m2;
}



int main() {
	init();
	solve();
	return 0;
}
