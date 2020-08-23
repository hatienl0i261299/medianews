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

int main() {
	int n;cin >> n;
	for (int i = 2;i < n;i++) {
		if (nguyen_to(i)) cout << i << " ";
	}
	return 0;
}
