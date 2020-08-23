#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

bool dk(int n) {
	int a[mx];
	int dem = 0;
	bool h_6 = false;
	int s = 0;
	
	do {
		int tm = n%10;
		if (tm == 6) {
			h_6 = true;
		}
		a[dem++] = tm;
		s += tm;
		n/=10;
	} while ( n > 0);
	
	if (h_6 == false) {
		return false;
	}
	if (s % 10 != 8) {
		return false;
	}
	int i = 0,j = dem-1;
	while (i < j) {
		if (a[i] != a[j]) {
			return false;
		}
		i++;
		j--;
	}
	return true;
}

void solve() {
	int a,b,i;
	cin >> a >> b;
	if (a > b) {
		int tm = a;
		a = b;
		b = tm;
	}
	for (i = a;i <= b;i++) {
		if (dk(i)) {
			cout << i << " ";
		}
	}
}

int main() {
	solve();
	return 0;
}
