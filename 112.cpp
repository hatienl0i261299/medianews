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

void solve() {
	int n;
	cin >> n;
	for (int i = 1;i <=10;i++) {
		cout << n * i << " ";
	}
}

int main() {
	solve();
	return 0;
}
