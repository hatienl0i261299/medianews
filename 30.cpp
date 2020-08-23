#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

ll a,b;

void init() {
	cin >> a >> b;
	if (a > b) {
		ll temp = a;
		a = b;
		b = temp;
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

bool tat_ca_cac_so_va_tong_la_nguyento(int num) {
	ll s = 0;
	while (num > 0) {
		ll tm = num % 10;
		if (!nguyen_to(tm)) {
			return false;
		}
		s += tm;
		num /= 10;
	}
	if (!nguyen_to(s)) {
		return false;
	}
	return true;
}

void solve() {
	ll dem = 0;
	for (int i = a;i <= b;i++) {
		if (nguyen_to(i) and tat_ca_cac_so_va_tong_la_nguyento(i)) {
			dem++;
		}
	}
	cout << dem;
}

int main() {
	init();
	solve();
	return 0;
}
