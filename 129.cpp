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
	for (int i = 2;i <= n;i++) {
		int dem = 0;
		while (n % i == 0) {
			dem ++;
			n /= i;
		}
		if (dem) {
			cout << i << " ";
		}
	}
	return 0;
}
