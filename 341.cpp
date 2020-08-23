#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int swap(int &a,int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int n,a[mx][mx];
	cin >> n;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cin >> a[j][i];
		}
	}
	
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			for (int k = j;k < n;k++) {
				if (a[i][j] < a[i][k]) {
					swap(a[i][j],a[i][k]);
				}
			}
		}
	}
	
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cout << a[j][i] << " ";
		}
		cout << "\n";
	}
	return 0;
}
