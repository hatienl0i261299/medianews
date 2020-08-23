#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

int main() {
	int n,tm,a[mx],chan[mx],c_c = 0,le[mx],c_l = 0;
	cin >> n;
	for (int i = 1;i <= n;i++) {
		cin >> tm;
		if (tm % 2 == 0) {
			chan[c_c++] = tm;
		} else {
			le[c_l++] = tm;
		}
	}
	if (c_l) {
		cout << c_l << " ";
		for (int i = 0;i < c_l;i++) cout << le[i] << " ";
	} else cout << 0;
	cout << "\n";
	if (c_c) {
		cout << c_c << " ";
		for (int i = 0;i < c_c;i++) cout << chan[i] << " ";
	} else cout << 0;
	return 0;
}
