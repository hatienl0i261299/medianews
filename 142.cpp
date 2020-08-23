#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <algorithm>
#define mx 100
#define null NULL
#define ll long long
using namespace std;


int C(int k,int n) {
	if (k == 0 or k == n)return 1;
	if (k == 1) return n;
	return C(k-1,n-1) + C(k,n-1);
}

void solve() {
	int n;
	cin >> n;
	for (int i = 0;i < n;i++) {
		for (int j = n;j > i;j--) {
			cout << " ";
		}
		for (int j = 0;j <= i;j++) {
			cout << C(j,i) << " ";
		}
		cout << "\n";
	}
}

int main() {
	solve();
	return 0;
}
