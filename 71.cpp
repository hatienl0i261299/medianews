#include <bits/stdc++.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

void solve() {
	ll n,a[mx],chan[mx],le[mx],c_chan = 0,c_le = 0;
	cin >> n;
	
	for (int i = 0;i < n;i++) {
		cin >> a[i];
		if (a[i] % 2 == 0) {
			chan[c_chan++] = a[i];
		} else {
			le[c_le++] = a[i];
		}
	}
	cout << c_chan << " ";for (int i = 0;i < c_chan;i++) cout << chan[i] << " ";
	cout << endl;
	cout << c_le << " ";for (int i = 0;i < c_le;i++) cout << le[i] << " ";
}

int main() {
	solve();
	return 0;
}
