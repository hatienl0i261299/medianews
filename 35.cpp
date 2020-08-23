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

void solve() {
	int i = 0,j = n-1;
	while (i < j) {
		if (a[i] != a[j]) {
			cout << 0;
			return;
		}
		i++;
		j--;
	}
	cout << 1;
}


int main() {
	init();
	solve();
	return 0;
}
