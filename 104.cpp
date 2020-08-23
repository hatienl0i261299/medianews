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
bool nam_nhuan(int n) {
	if ((n % 4 == 0 and n % 100 != 0) or n % 400 == 0) {
		return true;
	}
	return false;
}
int main() {
	int n;
	cin >> n;
	cout << nam_nhuan(n);
	return 0;
}
