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

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
	int a,b;cin >> a >> b;
	cout << __gcd(a,b);
	return 0;
}
