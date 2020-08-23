#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

ll m,n,a[mx][mx],b[mx][mx],c[mx][mx];

void init(){
	cin >> n >> m;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			cin >> a[i][j];
		}
	}
}

void mt_chuyen_vi() {
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			b[j][i] = a[i][j];
		}
	}
}

void solve() {
	mt_chuyen_vi();
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			for (int k = 0;k < m;k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cout << c[i][j] << " ";
		}
		cout << "\n";
	}
}

int main() {
	init();
	solve();
	return 0;
}
