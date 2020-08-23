#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int a,b;

void find_ucln() {
	int _max,_min,ucln;
	if (a > b) {
		_min = b;
		_max = a;
	} else {
		_min = a;
		_max = b;
	}
	for (int i = 1;i <= _max;i++) {
		if (_min % i == 0 and _max % i == 0) {
			ucln = i;
		}
	}
	cout << ucln << " ";
}

void find_bcnn() {
	int bcnn;
	int _max,_min;
	if (a > b) {
		_min = b;
		_max = a;
	} else {
		_min = a;
		_max = b;
	}
	for (int i = _max;i <= a * b;i++) {
		if (i % _min == 0 and i % _max == 0) {
			bcnn = i;
			break;
		}
	}
	cout << bcnn;
}


int main() {
	cin >> a >> b;
	find_ucln();find_bcnn();
	return 0;
}
