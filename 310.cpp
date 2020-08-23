#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;
int main() {
	int n,a[mx],c = 0,tm;
	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> tm;
		if (tm%2==0)cout << tm << " ";
		else a[c++] = tm;
	}
	cout << endl;
	for (int i = 0;i < c;i++) cout << a[i] << " ";
	return 0;
}
