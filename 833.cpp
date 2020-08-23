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

int main() {
	int n;cin >> n;
	int a[mx][mx];
	int v = 1;
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= i;j++) {
			a[j][i] = v++;
		}
	}
	
	int s = 3;
	for (int i = 1;i <= n;i++) {
		for (int sp = 1;sp <= s;sp++) {
			cout << " ";
		}
		
		for (int j = i;j <= n;j++) {
			cout << a[i][j];
			
			if (j < 4) {
				cout << "   ";
			} else {
				cout << "  ";
			}
		}
		if (i == 3) {
			s += 3;
		} else {
			s += 4;
		}
		cout << "\n";
	}
	
	return 0;
}
