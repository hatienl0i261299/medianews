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

int main() {
	int n;cin >> n;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n-i-1;j++) {
			cout << "~";
		}
		
		int c = 2;
		for (int j = 0;j <= (2*n - 2*(n-i))/2;j++) {
			cout << c;
			c += 2;
		}
		c -= 2;
		
		
		for (int j = 0;j < (2*n - 2*(n-i))/2;j++) {
			c -= 2;
			cout << c;
		}
		
		cout << "\n";
	}
	return 0;
}
