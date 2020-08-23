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
	for (int i = 1;i <= n;i++) {
		if (i % 2 != 0) {
			int c = 1;
			for (int j = 1;j <= i;j++) {
				cout << c;
				c += 2;
			}
		} else {
			int c = 2;
			for (int j = 1;j <= i;j++) {
				cout << c;
				c += 2;
			}
		}
		cout << "\n";
	}
	return 0;
}
