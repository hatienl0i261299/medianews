#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#define mx 100
#define null NULL
#define ll long long
using namespace std;
ll n,m;
int a[mx][mx];

void init() {
	cin >> n >> m;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			cin >> a[i][j];
		}
	}
}

void solve() {
	ll tong_hang = 0;
	ll hang_xoa = 0;
	ll tong_cot = 0;
	ll cot_xoa = 0;
	for (int i = 0;i < n;i++) {
		int tm = 0;
		for (int j = 0;j < m;j++) {
			tm += a[i][j];
		}
		if (tm > tong_hang) {
			tong_hang = tm;
			hang_xoa = i;
		}
	}
	for (int j = 0;j < m;j++) {
		a[hang_xoa][j] = 261726712;
	}
	
	
	for (int i = 0;i < n;i++) {
		int tm = 0;
		for (int j = 0;j < m;j++) {
			tm += a[j][i];
		}
		if (tm > tong_cot) {
			tong_cot = tm;
			cot_xoa = i;
		}
	}
	
	for (int j = 0;j < n;j++) {
		a[j][cot_xoa] = 261726712;
	}
	
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			if (a[i][j] != 261726712) {
				cout << a[i][j] << " "; 
			}
		}
		cout << "\n";
	}
}

int main() {
	init();
	solve();
	return 0;
}
