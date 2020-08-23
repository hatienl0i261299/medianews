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

void tich(int a[][mx],int b[][mx],int n,int m) {
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			int tm = 0;
			for (int k = 0;k < m;k++) {
				tm += (a[i][k]*b[k][j]);
			}
			cout << tm << " ";
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
	
	for (int i = 0;i < m;i++) {
		for (int j = 0;j < n;j++) {
			cin >> br[i][j];
		}
	}
	tich(ar,br,n,m);
	
	
	return 0;
}
