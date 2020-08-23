#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

ll n;

void init() {
	cin >> n;
}

void solve() {
	for (int i = 2;i <= n;i++) {
		int dem = 0;
		while (n % i == 0) {
			dem++;
			n /= i;
		}
		if (dem){
			if (dem > 1) {
				for (int j = 0;j < dem;j++) {
					cout << i << " ";
				}
			} else {
				cout << i << " ";
			}
		}
	}
}

int main() {
	init();
	solve();
	return 0;
}
