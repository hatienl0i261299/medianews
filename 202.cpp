#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

bool oke(int n) {
	int a[mx],c = 0;
	while (n) {
		int tm = n%10;
		a[c++] = tm;
		n /= 10;
		if (tm == 9) {
			return false;
		}
	}
	int i = 0,j = c-1;
	while (i < j) {
		if (a[i] != a[j]) return false;
		i++;j--;
	}
	return true;
}

int main() {
	int n,dem = 0;cin >> n;
	for (int i = 2;i < n;i++) {
		if (oke(i)) cout << i << " ",dem++;
	}
	cout << endl << dem;
	return 0;
}
