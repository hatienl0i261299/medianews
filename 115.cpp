#include <bits/stdc++.h>
#include <stdio.h>
#include <conio.h>
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
    int temp = a[0];
    a[0] = a[dem-1];
    a[dem-1] = temp;
    int start;
    if (a[dem-1] == 0) {
    	start = dem-2;
	} else {
		start = dem-1;
	}
    for (int i = start;i >= 0;i--) {
    	cout << a[i];
	}
}

int main() {
	solve();
	return 0;
}
