#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

void solve() {
	ll n,a[mx][mx];
	cin >> n;
	for (int i = 0;i < n;i++) {
		int dem = i+1;
		for (int x = i;x> 0;x--) {
			cout << dem << " ";
			dem--;
		}
		
		dem = 1;
		for (int y = i;y < n;y++) {
			cout << dem<< " ";
			dem++;
		}
		cout << "\n";
	}
}

int main() {
	solve();
	return 0;
}
