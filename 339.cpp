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
int n,m,a,b,arr[mx][mx];
void init() {
	cin >> n >> m;
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= m;j++) {
			cin >> arr[i][j];
		}
	}
	cin >> a >> b;
}

void swap(int &x,int &y) {
	int temp = x;
	x = y;
	y = temp;
}

void solve() {
	for (int i = 1;i <= n;i++) {
		swap(arr[i][a],arr[i][b]);
	}
	for (int i = 1;i <= n;i++) {
		for (int j = 1;j <= m;j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
}

int main() {
	init();solve();
	return 0;
}
