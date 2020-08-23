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
	int n,c;cin >> n;
	for (int i = 0;i < n;i++) {
		c = n;
		for (int j = 0;j <= i;j++) {
			cout << c--;
		}
		
		c = n-i;
		for (int j = 0;j < 2*n-(1+i)*2;j++) {
			cout <<c;
		}
		
		c = n-i+1;
		for (int j = 0;j < i;j++) {
			cout << c++;
		}
		cout << "\n";
	}
	int m = n - 1;
	for (int i = 0;i < m;i++) {
		c = n;
		for (int j = 0;j < m-i;j++) {
			cout << c--;
		}
		
		c = 2+i;;
		for (int j = 0;j < 2*n - 2*(m-i) - 1;j++) {
			cout << c;
		}
		
		c = 2+i;
		for (int j = 0;j < m-i;j++) {
			cout << c++;
		}
		
		cout << "\n";
	}
	return 0;
}
