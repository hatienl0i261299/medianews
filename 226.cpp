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
	int n;
	cin >> n;
	int c = 1;
	for (int i = 1;i <= n;i++) {
		if (i % 2 != 0) {
			for (int j = 1;j <= i;j++) {
				cout << c++ << " ";
			}
		} else {
			for (int j = i;j >= 1;j--) {
				cout << c-1+j << " ";
			}
			c += i;
		}
		cout << "\n";
	}
	return 0;
}
