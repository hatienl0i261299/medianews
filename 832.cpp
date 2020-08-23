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
	int c = 1;
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= n-i + 1;j++) {
			a[j][i] = c++;
		}
	}
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= n;j++) {
			if (a[i][j] != 0) cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}
