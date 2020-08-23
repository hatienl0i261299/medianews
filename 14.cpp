#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	ll n;
	cin >> n;
	ll tm = 1;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cout << tm++ << " ";
		}
		cout << "\n";
	}
}
