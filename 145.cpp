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

void solve() {
	int n;
	cin >> n;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n-i-1;j++) {
			cout << "~";
		}
		for (int j = 0;j < n;j++) {
			cout << "*";
		}
		cout << "\n";
	}
}

int main() {
	solve();
	return 0;
}


