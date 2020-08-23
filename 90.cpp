#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#define mx 100
#define null NULL
#define ll long long
using namespace std;
ll a,b;

bool thuan_nghich(int num) {
	int ar[mx];
	int dem = 0;
	do {
		ar[dem++] = num % 10;
		num /= 10;
	} while (num > 0);
	int i = 0,j = dem-1;
	while (i < j) {
		if (ar[i] != ar[j]) {
			return false;
		}
		i++;
		j--;
	}
	return true;	
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


bool dk(int num) {
	int dem = 0;
	for (int i = 0;i < num;i++) {
		if (nguyen_to(i)) {
			if (num % i == 0) {
				dem++;
			}
		}
	}
	if (dem >= 3) {
		return true;
	}
	return false;
}

void solve() {
	for (int i = a;i <= b;i++) {
		if (thuan_nghich(i) and dk(i)) {
			cout << i << " ";
		}
	}
}
int main() {
	cin >> a >> b;
	if (a > b) {
		ll tm = a;
		a = b;
		b = tm;
	}
	solve();
	return 0;
}
