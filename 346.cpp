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

void tong(int a[mx][mx],int b[mx][mx],int n,int m) {
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			cout << a[i][j] + b[i][j] << " ";
		}
		cout << endl;
	}
}

int main() {
	int n,m,ar[mx][mx],br[mx][mx];
	cin >> n >> m;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			cin >> ar[i][j];
		}
	}
	
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			cin >> br[i][j];
		}
	}
	tong(ar,br,n,m);
	
	
	return 0;
}

