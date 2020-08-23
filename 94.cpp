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
ll n,a[mx][mx];
void init() {
	cin >> n;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cin >> a[i][j];
		}
	}
}

bool nguyen_to(int num) {
	if (num < 2) {
		return false;
	} 
	for (int i = 2;i <= sqrt(num);i++) {
		if (num % i == 0)  {
			return false;
		}
	}
	return true;
}

bool check(int a[],int num,int l) {
	for (int i = 0;i < l;i++) {
		if (a[i] == num) {
			return false;
		}
	}
	return true;
}

void solve() {
	int dem = 0;
	int tm[mx],c_tm = 0;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (i == j or (i+j) == n-1) {
				if (nguyen_to(a[i][j]) and check(tm,a[i][j],c_tm)) {
					dem++;
					tm[c_tm++] = a[i][j];
				}
			}
		}
	}
	cout << dem;
}

int main() {
	init();
	solve();
	return 0;
}
