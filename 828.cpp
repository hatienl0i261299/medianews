#include <bits/stdc++.h>
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

bool nghich(int num) {
	int arr[mx],a = num,c = 0;
	
	while (num) {
		arr[c++] = num % 10;
		num /= 10;
	}
	
	int n = 0;
	for (int i = 0;i < c;i++) {
		n += arr[i] * pow(10,c-i-1);
	}
	if (n != a) {
		return nguyen_to(n);
	}
	return false;
}

void solve() {
	int n,m;cin >> n >> m;
	if (n > m) {
		int tm = n;n = m;m = tm;
	}
	for (int i = n;i <= m;i++) {
		if (nguyen_to(i) and nghich(i) and i > 10) {
			cout << i << " ";
		}
	}
}

int main() {
	solve();
	return 0;
}
