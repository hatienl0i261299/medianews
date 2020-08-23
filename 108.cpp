#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
#include <conio.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

bool check(int a,int b,int c) {
	return a + b > c;
}

int main() {
	int a,b,c;cin >> a >> b >> c;
	if (a < 0 or b < 0 or c < 0) {
		cout << 0;
		return 0;
	}
	if (check(a,b,c) and check(a,c,b) and (b,c,a)) cout << 1;
	else cout << 0;
	return 0;
}
