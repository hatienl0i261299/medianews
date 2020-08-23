#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#define mx 100
#define null NULL
#define ll long long
using namespace std;
int n;

bool thuan_nghich(ll num) {
	ll ar[mx];
	ll dem = 1;
	ll sum = 0;
	do {
		ll tm = num % 10;
		sum += tm;
		ar[dem++] = tm;
		num /= 10;
	} while (num > 0);
	int i = 1,j = n;
	while (i < j) {
		if (ar[i] != ar[j]) {
			return false;
		}
		i++;
		j--;
	}
	if (sum % 10 != 0) {
		return false;
	}
	return true;	
}


void solve() {
	cin >> n;
	ll count = 0;
	for (int i = pow(10,n-1);i < pow(10,n);i++) {
		if (thuan_nghich(i)) {
			count ++;
		}
	}
	cout << count;
}

int main() {
	solve();
	return 0;
}
