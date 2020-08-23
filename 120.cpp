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

bool check(int a[],int num,int l) {
	for (int i = 0;i < l;i++) {
		if (a[i] == num) return false;
	}
	return true;
}

void solve() {
	int n,a[mx],c = 0;
	cin >> n;
	
	while (n > 0) {
		a[c++] = n%10;
		n /= 10;
	}
	
	int used[mx],c_used = 0;
	
	for (int i = c-1;i >= 0;i--) {
		if (check(used,a[i],c_used)) {
			int dem = 0;
			for (int j = i;j >= 0;j--) {
				if (a[i] == a[j]) {
					dem++;
				}
			}
			used[c_used++] = a[i];
			cout << a[i] << " " << dem << "\n";
		}
	}
}

int main() {
	solve();
	return 0;
}
