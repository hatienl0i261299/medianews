#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#define mx 100
#define null NULL
#define ll long long
using namespace std;
ll n,a[mx],b[mx];
void init() {
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
}

bool nt(int num) {
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

bool check_in_b(ll num) {
	for (int i = 0;i < n;i++) {
		if (b[i] == num) {
			return true;
		}
	}
	return false;
}
unsigned long long lay_so_luong(ll num) {
	ll dem = 0;
	for (int i = 0;i < n;i++) {
		if (a[i] == num) {
			dem++;
		}
	}
	return dem;
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
	for (int i = 0;i < n;i++) {
		if (nt(a[i])) {
			if (!check_in_b(a[i])) {
				b[i] = a[i];
			}
		}
	}
	sap_xep_chen(b,n);
	for (int i = 0;i < n;i++) {
		if (b[i] != 0) {
			ll so_luong = lay_so_luong(b[i]);
			cout << b[i] << " " << so_luong << "\n";
		}
	}
}

int main() {
	init();
	solve();
	return 0;
}
