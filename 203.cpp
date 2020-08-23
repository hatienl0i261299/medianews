#include <bits/stdc++.h>
#define mx 100
#define null NULL
#define ll long long
using namespace std;

bool nguyen_to(int n) {
	if (n < 2) {
		return false;
	}
	for (int i = 2;i <= sqrt(n);i++) {
		if (n % i == 0) return false;
	}
	return true;
}

bool dk(int n) {
	int arr[mx],c = 0;
	while (n) {
		arr[c++] = n%10;
		n/=10;
	}
	int tm = arr[0];
	for (int i = 1;i < c;i++) {
		if (tm < arr[i]) return false;
	}
	return true;
}

void solve(int n) {
	int dem = 0;
	for (int i = 2;i <= n;i++) {
		if (nguyen_to(i) and dk(i)) cout << i << " ",dem++;
	}
	cout << "\n" << dem;
}

int main() {
	int n;cin >> n;
	solve(n);
	return 0;
}
