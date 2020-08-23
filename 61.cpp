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

ll n,a[mx];

void init() {
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
}

bool check(int num) {
	int ar[mx],dem = 0;
	while (num > 0) {
		ar[dem++] = num%10;
		num/=10;
	}
	if (dem < 2) return false;
	int i = 0,j = dem-1;
	while (i < j) {
		if (ar[i] != ar[j]) return false;
		i++;j--;
	}
	return true;
}

void solve() {
	int res[mx],tm = 0;
	for (int i = 0;i < n;i++) {
		if (check(a[i])){
			res[tm++] = a[i];
		}
	}
	cout << tm << " ";for (int i = 0;i < tm;i++) cout << res[i] << " ";
}


int main() {
	init();solve();return 0;
}
