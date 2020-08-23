#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int n,a[mx],pos;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> a[i];
	}
	cin >> pos;
	
	for (int i = pos-1;i < n;i++) {
		a[i] = a[i+1];
	}
	
	n--;
	
	for (int i = 0;i < n;i++) {
		cout << a[i] << " ";
	}
	
	return 0;
}
