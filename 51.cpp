#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
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
	int dem = 0;
	ll b[mx];
	for (int i = 0;i < n;i++) {
		if (nguyen_to(a[i])) {
			b[dem++] = a[i];
		}
	}
	cout << dem << " ";
	for (int i = 0;i < dem;i++) {
		cout << b[i] << " ";
	}
}

int main() {
	init();
	solve();
	return 0;
}
