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
	string res;
	ll tm;
	for (int i = 0;i < strlen(chr);i++) {
		if (i == 0) {
			res += chr[0];
		} else {
			if (chr[i-1] == ' ' and chr[i] != ' ') {
				res += chr[i];
				tm = i;
			}
		}
	}
	for (int i = tm;i < strlen(chr);i++) {
		cout << chr[i];
	}
	for (int i = 0;i < res.length()-1;i++) {
		cout << res[i];
	}
	cout << "@ptit.edu.vn";
}

int main() {
	solve();
	return 0;
}
