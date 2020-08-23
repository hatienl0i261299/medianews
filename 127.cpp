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

int main() {
	int n,s = 0;
	cin >> n;
	for (int i = 0;i < n;i++) {
		if (nguyen_to(i)) {
			s += i;
		}
	}
	cout << s;
	return 0;
}
