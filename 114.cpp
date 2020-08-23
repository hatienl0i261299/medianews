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
	int n,a[mx],dem=0;
	cin >> n;
	
    while (n)
    {
        a[dem++] = n%10;
        n /= 10;
    }
    cout << a[dem-1] << " " << a[0];
}

int main() {
	solve();
	return 0;
}
