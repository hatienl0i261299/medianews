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
	int lon = -9999,nho = 9999;
	char *p = strtok(chr," ");
	char *lonnhat, *nhonhat;
	while (p != null) {
		
		int l = strlen(p);
		
		if (l > lon) {
			lon = l;
			lonnhat = p;
		}
		
		if (l < nho) {
			nho = l;
			nhonhat = p;
		}
		
		p = strtok(null," ");
	}
	cout << lonnhat << " " << nhonhat;
}

int main() {
	solve();
	return 0;
}
