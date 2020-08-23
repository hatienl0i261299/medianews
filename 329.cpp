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
	char chr = 'a';
	for (int i = 1;i <= n;i++) {
		if (i % 2 != 0) {
			for (int j = 1;j <= i;j++) {
				cout << static_cast<char>(chr++) << " ";
			}
		} else {
			for (int j = i;j >= 1;j--) {
				cout << static_cast<char>(chr-1+j) << " ";
			}
			chr += i;
		}
		cout << "\n";
	}
	return 0;
}
