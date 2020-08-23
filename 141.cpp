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

void solve() {
	float a,b;cin >>a >> b;
	
	if (a == 0) {
		if (b == 0) {
			cout << "VSN";
		} else {
			cout << "VN";
		}
	} else {
		printf("%.2f",(-b)/a);
	}
}

int main() {
	solve();
	return 0;
}
