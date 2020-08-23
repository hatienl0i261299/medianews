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
	int a,b,s = 0;
	cin >> a >> b;
	if (a > b) {
		int temp = a;a = b;b = temp;
	}
	for (int i = a;i <=b;i++) {
		if (nguyen_to(i)) {
			s += i;
		}
	}
	cout << s;
}
int main() {
	solve();
	return 0;
}
