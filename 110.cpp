#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <iomanip>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

void solve() {
	double a,b,c,x1,x2,denta;
	cin >> a >> b >> c;
	denta = b*b - 4*a*c;
	if (denta < 0) {
		cout << "NO";
	}else if (denta == 0) {
		x1 = x2 = (-b) / (2*a);
		cout << fixed << setprecision(2);
		cout << x1;
	} else {
		x1 = (-b + sqrt(denta)) / (2*a);
		x2 = (-b - sqrt(denta)) / (2*a);
		cout << fixed << setprecision(2);
		cout << x1 << " " << x2;
	}
	
}

int main() {
	solve();
	return 0;
}
