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

void solve() {
	char chr[mx];
	fflush(stdin);gets(chr);
	strlwr(chr);
	ll tm;
	for (int i = 0;i < strlen(chr);i++) {
		if (i == 0) {
			cout << chr[0];
		} else {
			if (chr[i-1] == ' ' and chr[i] != ' ') {
				cout << chr[i];
				tm = i+1;
			}
		}
	}
	for (int i = tm;i < strlen(chr);i++) {
		cout << chr[i];
	}
	cout << "@ptit.edu.vn";
}

int main() {
	solve();
	return 0;
}
