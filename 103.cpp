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

int main() {
	ll n;
	cin >> n;
	if (n < 0) {
		cout << 0;
	} else {
		if (n % 2 == 0) {
			cout << 0;
		} else {
			cout << 1;
		}
	}
	return 0;
}
