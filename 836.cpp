#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

void show(int a[],int n) {
	for (int i = 0;i < n;i++) {
		cout << a[i] << " ";
	}
	cout << "\n";
}

void swap(int &x,int &y) {
	int tmp = x;
	x = y;
	y = tmp;
}

int main() {
	int n,a[mx];
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	
	int min;
	for (int i = 0;i <= n-2;i++) {
		min = i;
		for (int j = i+1;j <= n-1;j++) {
			if (a[min] > a[j]) {
				min = j;
			}
		}
		swap(a[min],a[i]);
		show(a,n);
	}
	return 0;
}
