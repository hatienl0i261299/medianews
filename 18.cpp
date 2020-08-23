#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

ll a,b;

void init(){
	cin >> a >> b;
	if (a > b) {
		ll temp = a;
		a = b;
		b = temp;
	}
}

bool nguyen_to(int num) {
	if (num < 2) {
		return false;
	}
	for (int i = 2;i <= sqrt(num);i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}


void solve() {
	for (int i = a;i <= b;i++) {
		if (nguyen_to(i)) {
			cout << i << " ";
		}
	}
}

int main() {
	init();
	solve();
	return 0;
}
