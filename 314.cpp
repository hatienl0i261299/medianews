#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

void solve(int &n,int *a,int &pos) {
	for (int i = pos+1;i <= n;i++) {
		cout << a[i] << " ";
	}
	for (int i = 1;i <= pos;i++) {
		cout << a[i] << " ";
	}
}

int main() {
	int n,a[mx],pos;
	cin >> n;
	for (int i = 1;i <= n;i++) cin >> a[i];
	cin >> pos;
	solve(n,a,pos);
	return 0;
}
