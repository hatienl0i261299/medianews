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

bool check(char *a,char *b) {
	for (int i = 0;i < strlen(a);i++) {
		if (a[i] != b[i]) {
			return false;
		}
	}
	return true;
}

void solve() {
	char s[mx],a[mx][mx];
	gets(s);
	strlwr(s);
	int n = 0;
	char *p = strtok(s," ");
	while (p != null) {
		strcpy(a[n++],p);
		p = strtok(null," ");
	}
	int _mx = -9999;
	char *res;
	for (int i = 0;i < n;i++) {
		int dem = 1;
		for (int j = i+1;j < n;j++) {
			if (check(a[i],a[j])) dem ++;
		}
		if (dem > _mx) {
			_mx = dem;
			res = a[i];
		}
	}
	cout << res << " " << _mx;
}

int main() {
	solve();
	return 0;
}
