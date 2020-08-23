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
	int n,a[mx],c = 0;
	cin >> n;
	while (n) {
		a[c++] = n%10;
		n/=10;
	}
	int i = 0,j = c-1;
	bool flag = true;
	while (i < j) {
		if (a[i] != a[j]) {
			flag = false;
		}
		i++;j--;
	}
	if (flag) cout << 1;
	else cout << 0;
	return 0;
}
