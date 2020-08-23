#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#define mx 100
#define null NULL
#define ll long long
using namespace std;


int main() {
	int n;
	cin >> n;
	int tm,a = -999999,b = 999999;
	for (int i = 0;i < n;i++) {
		cin >> tm;
		if (tm > a) {
			a = tm;
		} else if (tm < b) {
			b = tm;
		}
	}
	cout << a << " " << b;
	
	return 0;
}
