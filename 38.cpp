#include <bits/stdc++.h>
#include <stdio.h>
#include <iostream>
#define mx 100

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[mx][mx],hang = n,cot = n,value = 1,k = 1;
	while (k <= (n/2 + 1)) {
		for (int i = k;i <= cot;i++) {
			a[k][i] = value++;
		}
		for (int i = k+1;i <= hang;i++) {
			a[i][cot] = value++;
		}
		for (int i = cot - 1;i >= k;i--) {
			a[hang][i] = value++;
		}
		for (int i = hang - 1;i >= k+1;i--) {
			a[i][k] = value++;
		}
		k++;
		hang--;
		cot--;
	}
	for (int i = 1;i <=n;i++) {
		for (int j = 1;j <= n;j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
