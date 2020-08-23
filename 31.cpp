#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#define mx 100
#define null NULL
#define ll long long
using namespace std;
ll n;

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

bool day_tang(int a[],int l) {
	for (int i = 0;i < l-1;i++) {
		if (a[i] >= a[i+1]) {
			return false;
		}
	}
	return true;
}
bool day_giam(int a[],int l) {
	for (int i = 0;i < l-1;i++) {
		if (a[i] <= a[i+1]) {
			return false;
		}
	}
	return true;
}

bool dk(int num) {
	int a[mx];
	int dem = 0;
	while (num > 0) {
		a[dem++] = num % 10;
		num /= 10;
	}
	if (day_tang(a,dem) or day_giam(a,dem)) return true;
	else return false;
}

void solve() {
	int dem = 0;
	for (int i = pow(10,n-1);i < pow(10,n);i++) {
		if (nguyen_to(i) and dk(i)) {
			dem++; 
		}
	}
	cout << dem;
}

int main() {
	cin >> n;
	solve();
	return 0;
}
