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
	int n,a[mx],b[mx] = {0};
	cin >> n;
	for (int i = 0;i < n;i++) cin >> a[i],b[a[i]]++;
	
	for (int i = 0;i < n;i++) {
		if (b[a[i]] != -999) {
			cout << a[i] << " ";
			b[a[i]] = -999;
		}
	}
	
	return 0;
}
