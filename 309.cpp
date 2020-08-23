#include <bits/stdc++.h>
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

int main() {
	int n,a[mx];
	cin >> n;
	for (int i = 0;i < n;i++) cin >> a[i];
	for (int j = n-1;j >= 0;j--) cout << a[j] << " ";
	return 0;
}
