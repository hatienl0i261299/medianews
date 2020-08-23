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
	for (int i = 0;i < n;i++) {
		for (int j = 0;j <= i;j++) {
			if (j == 0 or j == i or i == n-1) {
				cout << "*";
			} else {
				cout << ".";
			}
		}
		cout << "\n";
	}
	return 0;
}
